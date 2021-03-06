//  **************************************************************************
//
//       Copyright (c) 1992-2006 Professonal Computer Technology Co., Ltd
//
//      All rights are reserved. Reproduction in whole or in parts is
//  prohibited without the prior written consent of the copyright owner.
//  --------------------------------------------------------------------------
//
//  Module: Main.C
//
//  Purpose: Implementation of Main.
//
//  Version: 0.01                                   2006/10/22 10:39?U??
//
//  Compiler: Keil 8051 C Compiler v7.2
//
//  Reference:
//
//
//
//  --------------------------------------------------------------------------
//  Modification:
//
//	R0.01 2006/10/22 10:39?U?? Phoenix Chuang
//	Reason:
//		1. Original.
//	Solution:
//	
//  **************************************************************************
// 	-----------------------------------
//			Header Files
//	----------------------------------- 
#include "Types.h"
#include "Main.h"
#include "Timer.h"
#include "UART.h"
#include "BusCtrl.h"
#include "TW2835_Init.h"
#include "CommandShell.h"
#include "OSDAction.h"

#include "Printf.h"
#include "monitor.h"

//	------------------------------------
//			Macro Definitions
//	------------------------------------ 


//	------------------------------------
//			Type Definitions
//	------------------------------------


//	------------------------------------
//			Variables Definitions
//	------------------------------------
	U16 _delay;
	U8 bdata commFlag;
	sbit comm_chk_flag = commFlag^0;
	sbit osd_chk_flag = commFlag^1;
	COMMAND_BUFFER RScommand;
	bit VlossFlag;
	#if (TW2837_DEBUG==ON)
	U8 access=1;
	#endif
//	------------------------------------
//			Function Prototypes
//	------------------------------------


// ===========================================================================
//                      Parallel function description
// ===========================================================================
//
//	Command Shell for Debug
//
void CommandShell(void){
//Kane @HS 2007 0809 Ver3.5>>>>
#if 1
	data BYTE ch;

	if( RS_RxReady() == true && RScommand.commFlage==false ) {
		ch=RS_rx();
		if( comm_chk_flag )	RS_tx(ch);

		switch(ch) {
			case '\r':
				RScommand.commBuf[RScommand.WritePtr] = '\0';
				RScommand.commFlage = true;
				chkStartCommShell(RScommand.commBuf);
				if( comm_chk_flag ) NewLine();
				break;
			
			case 0x08:
				RScommand.WritePtr--;
				break;

			default:
				RScommand.commBuf[RScommand.WritePtr] = ch;
				RScommand.WritePtr++;
				break;
		}
	}
#endif
}

// ===========================================================================
//
//
//
void NewLine(void)
{
	puts("\r\n");								    
}

// ===========================================================================
//
//
//
void PutsP(BYTE *ptr)
{
	data BYTE ch;
	
	while(*ptr!='\0') {
		ch = *ptr++;
		RS_tx(ch);
	}
}

// ===========================================================================
//
//	Restart Command Shell 
//
void ResetCommSell(void)
{
	if( comm_chk_flag ) PutsP("Debug Program >");

	RScommand.WritePtr = 0;
	RScommand.commFlage = false;
	RScommand.commBuf[0] = '\0';
}

// ===========================================================================
//
//	Falsh OSD Contril
//
void PCT_FlashOSDCtrl(U8 _on)
{
	if(_on) osd_chk_flag=false;
	else osd_chk_flag=true;
}

// ===========================================================================
//
//	Initial Command Shell 
//
void InitialCommShell(void)
{
	comm_chk_flag=false;
	osd_chk_flag=false;

	//VlossState=0;
	VlossFlag=0;
	VlossCount=0;
}

// ===========================================================================
//
//	Start Command Shell 
//
void chkStartCommShell(char *ptr)
{
	if( comm_chk_flag ) return;
	if( strcmp(ptr,"PCT")==0 ) comm_chk_flag=true;
}

void Wait_ms(U16 Tms)
{
#if (TW2835_MCU == TW8806_MODEL_WINBOND)  //Pinchi 20150325 add
	#define CPU_CLK_KHZ 	40000
	#define CountStick 		(1000000U/((CPU_CLK_KHZ*CPU_SPEED)/12))/20
#else  //Megawin
	#define CPU_CLK_KHZ 	22118
	#define CountStick 		((1000000U/((CPU_CLK_KHZ*CPU_SPEED)/12))/20)*8	
#endif
	#define CPU_SPEED 		1    

	U16 count;

	while(Tms)
	{
		for(count=0; count<CountStick; count++);//total 20 clock for this loop
			Tms--;
	}
}

// ===========================================================================
//
//
//
void main(void)
{
	U8 Counter=0;
	U8 OsdCount1=200;//Kane @HS 2007 0725 Ver3.4
	U8 OsdCount2=100;//Kane @HS 2007 0725 Ver3.4
	//BYTE val;

	InitialMPU();	
	InitialCommShell();
	PTC_SwitchToI2CMode();
	PCT_InitialTW2835();	// Initial RssetN for TW2835
	
	ResetCommSell();
	//PCT_CheckSystem();
//#if (TW2837==ON)//def TW2837_PINOUT_AS_TW2835
//	TW28_WriteByte(DVC_PG0,0x57,0x30);
 //   TW28_SetAsicFlgType(DVC_PG1,0x18, BIT3, BIT3);
 //   TW28_SetAsicFlgType(DVC_PG1,0x28, BIT3, BIT3);
//#endif	

	while(1){
#if  (TW2837_DEBUG==ON)

if(access==1)
{
	CommandShell();
	if(RScommand.commFlage == true) PCT_RunCommShell(RScommand.commBuf); 
	if(RScommand.commFlage == true) ResetCommSell(); 
}
else 

	{
	while( RS_RxReady())	Monitor();	
	}
#else
CommandShell();
if(RScommand.commFlage == true) PCT_RunCommShell(RScommand.commBuf); 
if(RScommand.commFlage == true) ResetCommSell(); 

#endif
	/*
	val=TW28_ReadByte(0x00,0x30);
	if(val==0)
		TW28_WriteByte(0x00,0x31,TW28_ReadByte(0x00,0x31)&0x7f);
	if(val!=VlossState)
		{
			//VlossCount++;
		//if(VlossCount>=5)
			//{
			VlossState=val;
			VlossFlag=1;
			//VlossCount=0;
			//}
		}
	//else
		//VlossCount=0;	
	*/
#if 1  //pinchi test
    //William-V3.10-20100206>>>>>>>>>>>>>>>>
	if(VlossFlag==1)
	{
		if(PCT_CheckSystem())//Kane Modified
			VlossFlag=0;
	}
	//<<<<<<<<<<<<<<<<<<<<<<<
#endif		
	if(RS_RxReady()) EnUserTimer(USERTMID1,OsdCount1);//Kane @HS 2007 0725 Ver3.4
	if(USERTMVAL1==1) {
		//PCT_AudioActionForHS();
		//PCT_OSDActionForHS();
		//PCT_FlashOSDCtrl(OFF);
		DisUserTimer(USERTMID1);
		EnUserTimer(USERTMID0,OsdCount2);//Kane @HS 2007 0725 Ver3.4	// Reset Scan Time, Delay Check and show
	}
	if(USERTMVAL0==1) {
		PCT_GetVideoSignalStatus();	// Check and Show "VLoss", scan time = 500ms
		EnUserTimer(USERTMID0,20);
	}
	}

	//OsdCount1 = 10;//Kane @HS 2007 0725 Ver3.4
	//OsdCount2 = 20;//Kane @HS 2007 0725 Ver3.4
}

// ===========================================================================
//
//
//
void InitialMPU(void){

	IP = 0x00;
	IE = 0x00;		

#if (TW2835_MCU == TW8816_MODEL_MEGAWIN)  //Pinchi 20150323 add
	PCON = 0x80;	// Set SMOD bit7 in power ctrl reg
					// This bit doubles the baud rate
#else
	PCON = 0x00; 	// Clear SMOD bit7 in power ctrl reg 
					// This bit doubles the baud rate
#endif

	PSW  = 0x00;	// Set Program state Register
	TMOD = 0x21;	// Set Timer MODE Register
					// Timer0: MODE=1, 16-BIT Timer
					// Timer1: MODE=2, 8-BIT Auto Reload )
	TCON = 0x00;	// Set Timer0/Timer1 Control Register
					// Timer0=OFF,Timer1=OFF
	SCON = 0x52;	// Setup Serial control Register
					// Mode 1: Start Bit=1,Stop Bit=1,Data Bit=8 
					// and ready Transmit
					// REN: enable receiver 
	P3M0=0x00;
	P3M1=0x10;//ryan@20180322
	
	InitialUART();
	InitialTimer0();
	
	TI = 1; 		//* Set TI to indicate ready to xmit */
	EA=1;
	_nop_();
}



// ===========================================================================
// END of File 
// ===========================================================================
