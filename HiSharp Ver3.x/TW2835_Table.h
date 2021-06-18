//  **************************************************************************
//
//       Copyright (c) 1992-2006 Professonal Computer Technology Co., Ltd
//
//      All rights are reserved. Reproduction in whole or in parts is
//  prohibited without the prior written consent of the copyright owner.
//  --------------------------------------------------------------------------
//
//  Module: TW2835_Table.H
//
//  Purpose: Implementation of TW2835_Table.
//
//  Version: 0.01                                   2006/11/1 02:35�U��
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
//	R0.01 2006/11/1 02:35�U�� Phoenix Chuang
//	Reason:
//		1. Original.
//	Solution:
//	
//  **************************************************************************
code unsigned char TW2835_Page0[]={ 
//	NTSC	
//   	  00    01      02         03        04      05    06      07    08       09    0A      0B    0C      0D    0E    0F
#if 1//ryan@20170920
	#if (TW2837TABLE==ON)	
	0x00, 0x80, 0x0F, 0xD0,	0x06, 0xF0, 0x08, 0x00,	0x11, 0x64, 0x00, 0x80, 0x80, 0x00, 0x07, 0x7F,	// 0x0//
	0x00, 0x80, 0x0F, 0xD0,	0x06, 0xF0, 0x08, 0x00,	0x11, 0x64, 0x00, 0x80, 0x80, 0x00, 0x07, 0x7F,	// 0x1//
	0x00, 0x80, 0x0F, 0xD0,	0x06, 0xF0, 0x08, 0x00,	0x11, 0x64, 0x00, 0x80, 0x80, 0x00, 0x07, 0x7F,	// 0x2//
	0x00, 0x80, 0x0F, 0xD0,	0x06, 0xF0, 0x08, 0x00,	0x11, 0x64, 0x00, 0x80, 0x80, 0x00, 0x07, 0x7F,	// 0x3//

	//0x00, 0x80, 0x0F, 0xD0,	0x06, 0xF0, 0x08, 0x80,	0x11, 0x64, 0x80, 0x80, 0x80, 0x00, 0x07, 0x7F,	// 0x0//Kane @HS 2007 @HS 2007 Ver3.4
	//0x00, 0x80, 0x0F, 0xD0,	0x06, 0xF0, 0x08, 0x80,	0x11, 0x64, 0x80, 0x80, 0x80, 0x00, 0x07, 0x7F,	// 0x1//Kane @HS 2007 @HS 2007 Ver3.4
	//0x00, 0x80, 0x0F, 0xD0,	0x06, 0xF0, 0x08, 0x80,	0x11, 0x64, 0x80, 0x80, 0x80, 0x00, 0x07, 0x7F,	// 0x2//Kane @HS 2007 @HS 2007 Ver3.4
	//0x00, 0x80, 0x0F, 0xD0,     0x06, 0xF0, 0x08, 0x80,     0x11, 0x64, 0x80, 0x80, 0x80, 0x00, 0x07, 0x7F, // 0x3//Kane @HS 2007 @HS 2007 Ver3.4

	#else
//   	  00    01      02      03    04      05    06      07    08       09    0A      0B    0C      0D    0E    0F
	0x80, 0x48, 0x00, 0xD0,  0x06, 0xF0, 0x08, 0x80,  0x80, 0x64, 0x80, 0x02, 0x06, 0x00, 0x11, 0x00,	// 0x0//Kane @HS 2007 @HS 2007 Ver3.4
	0x80, 0x48, 0x36, 0xD0,  0x06, 0xF0, 0x08, 0x80,  0x80, 0x64, 0x80, 0x02, 0x46, 0x00, 0x11, 0x00, // 0x1//Kane @HS 2007 @HS 2007 Ver3.4
	0x80, 0x48, 0x00, 0xD0,  0x06, 0xF0, 0x08, 0x80,  0x80, 0x64, 0x80, 0x02, 0x86, 0x00, 0x11, 0x00, // 0x2//Kane @HS 2007 @HS 2007 Ver3.4
	0x80, 0x48, 0x00, 0xD0,  0x06, 0xF0, 0x08, 0x80,  0x80, 0x64, 0x80, 0x02, 0xC6, 0x00, 0x11, 0x00, // 0x3//Kane @HS 2007 @HS 2007 Ver3.4
	#endif	
#else
	0x80, 0x48, 0x00/*0x19*/, 0xD0, 0x06, 0xF0, 0x08, 0x80, 0x80, 0x64, 0x80, 0x02, 0x06, 0x00, 0x11, 0x00,	// 0x0//Kane @HS 2007 @HS 2007 Ver3.4
	0x80, 0x48, 0x36/*0x19*/, 0xD0, 0x06, 0xF0, 0x08, 0x80, 0x80, 0x64, 0x80, 0x02, 0x46, 0x00, 0x11, 0x00, // 0x1//Kane @HS 2007 @HS 2007 Ver3.4
	0x80, 0x48, 0x00/*0x19*/, 0xD0, 0x06, 0xF0, 0x08, 0x80, 0x80, 0x64, 0x80, 0x02, 0x86, 0x00, 0x11, 0x00, // 0x2//Kane @HS 2007 @HS 2007 Ver3.4
	0x80, 0x48, 0x00/*0x19*/, 0xD0, 0x06, 0xF0, 0x08, 0x80, 0x80, 0x64, 0x80, 0x02, 0xC6, 0x00, 0x11, 0x00, // 0x3//Kane @HS 2007 @HS 2007 Ver3.4
#endif
	#if(TW2837TABLE==ON)
	0x00, 0x77, 0x07, 0x45, 0xA0, 0xD0, 0x00, 0xF0, 0xF0, 0xF0, 0xF2, 0x02, 0x00, 0x0F, 0x05, 0x05, // 0x4
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x43, 0xD8, 0xBC, 0xB8, // 0x5
	0x88, 0x88, 0x00, 0x00, 0x10, 0x32, 0x54, 0x76, 0x98, 0xBA, 0xDC, 0xFE, 0xC1, 0x00, 0x00, 0x00, // 0x6
	0x80, 0x34, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 0x7

	#else
	0x00, 0x77, 0x77, 0x45, 0xA0, 0xD0, 0x2F, 0x64, 0x80, 0x80, 0x82, 0x82, 0x00, 0x0F, 0x05, 0x00, // 0x4
	0x00, 0x80, 0x06, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 0x5
	0xAA, 0xAA, 0x00, 0x00, 0x10, 0x32, 0x54, 0x76, 0x98, 0xBA, 0xDC, 0xFE, 0x00, 0x00, 0x88, 0x88, // 0x6
	0xA8, 0x54, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 0x7
	#endif
#if 1///ryan@20180202
	#if(TW2837TABLE==ON)
	0x01, 0x7F, 0xFF, 0x7F, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x31, 0x00, 0xD0, 0x00, 0xF0, 0x08, // 0x8
	0x40, 0x7F, 0xFF, 0x7F, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x71, 0x00, 0xD0, 0x00, 0xF0, 0x08, // 0x9
	0x80, 0x7F, 0xFF, 0x7F, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xB1, 0x00, 0xD0, 0x00, 0xF0, 0x08, // 0xA
	0xC0, 0x7F, 0xFF, 0x7F, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xF1, 0x00, 0xD0, 0x00, 0xF0, 0x08, // 0xB
	#else
	0x00, 0x7F, 0xFF, 0x7F, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x31, 0x00, 0xD0, 0x00, 0xF0, 0x08, // 0x8
	0x40, 0x7F, 0xFF, 0x7F, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x71, 0x00, 0xD0, 0x00, 0xF0, 0x08, // 0x9
	0x80, 0x7F, 0xFF, 0x7F, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xB1, 0x00, 0xD0, 0x00, 0xF0, 0x08, // 0xA
	0xC0, 0x7F, 0xFF, 0x7F, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xF1, 0x00, 0xD0, 0x00, 0xF0, 0x08, // 0xB
	#endif	
#else
	0x01, 0x7F, 0xFF, 0x7F, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x31, 0x00, 0xD0, 0x00, 0xF0, 0x08, // 0x8
	0x41, 0x7F, 0xFF, 0x7F, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x71, 0x00, 0xD0, 0x00, 0xF0, 0x08, // 0x9
	0x81, 0x7F, 0xFF, 0x7F, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xB1, 0x00, 0xD0, 0x00, 0xF0, 0x08, // 0xA
	0xC1, 0x7F, 0xFF, 0x7F, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xF1, 0x00, 0xD0, 0x00, 0xF0, 0x08, // 0xB
#endif
	#if(TW2837TABLE==ON)
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0xFF, 0x00, 0x3C, 0x4F, 0x00, 0x00, 0x00, 0x00, 0x00, // 0xC
	#else
	0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0xF0, 0xFF, 0x00, 0x3C, 0x4F, 0x00, 0x00, 0x00, 0x00, 0x00, // 0xC
	#endif
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 0xD
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 0xE
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x28, 0x00, // 0xF

//	PAL
//   00         01    02    03       04       05     06    07     08      09      0A      0B    0C      0D     0E     0F
	#if (TW2837TABLE==ON)
	0x00, 0x80, 0x0a, 0xD0, 0x05, 0x20, 0x28, 0x00, 0x11, 0x64, 0x00, 0x00, 0x80, 0x00, 0x07, 0x7F,	// 0x0
	0x00, 0x80, 0x0a, 0xD0, 0x05, 0x20, 0x28, 0x00, 0x11, 0x64, 0x00, 0x00, 0x80, 0x00, 0x07, 0x7F,	// 0x1
	0x00, 0x80, 0x0a, 0xD0, 0x05, 0x20, 0x28, 0x00, 0x11, 0x64, 0x00, 0x00, 0x80, 0x00, 0x07, 0x7F,	// 0x2
	0x00, 0x80, 0x0a, 0xD0, 0x05, 0x20, 0x28, 0x00, 0x11, 0x64, 0x00, 0x00, 0x80, 0x00, 0x07, 0x7F,	// 0x3

	#else
	0x80, 0x48, 0x00, 0xD0, 0x06, 0x20, 0x28, 0x80, 0xA0, 0x80, 0x80, 0x82, 0x06, 0x00, 0x11, 0x00,	// 0x0
	0x80, 0x48, 0x40, 0xD0, 0x06, 0x20, 0x28, 0x80, 0xA0, 0x80, 0x80, 0x82, 0x46, 0x00, 0x11, 0x00, // 0x1
	0x80, 0x48, 0x00, 0xD0, 0x06, 0x20, 0x28, 0x80, 0xA0, 0x80, 0x80, 0x82, 0x86, 0x00, 0x11, 0x00, // 0x2
	0x80, 0x48, 0x40, 0xD0, 0x06, 0x20, 0x28, 0x80, 0xA0, 0x80, 0x80, 0x82, 0xC6, 0x00, 0x11, 0x00, // 0x3
	#endif
	#if (TW2837TABLE==ON)
	0x00, 0x77, 0x07, 0x45, 0xA0, 0xD0, 0x00, 0xf0, 0xf0, 0xf0, 0xf0, 0x02, 0x00, 0x0F, 0x05, 0x05, // 0x4
	0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 0x5
	0xAA, 0xAA, 0x00, 0x00, 0x10, 0x32, 0x54, 0x76, 0x98, 0xBA, 0xDC, 0xFE, 0x00, 0x00, 0x88, 0x88, // 0x6
	0x80, 0x34, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 0x7
	#else
	0x00, 0x77, 0x77, 0x45, 0xA0, 0xD0, 0x2F, 0x64, 0x80, 0x80, 0x82, 0x82, 0x00, 0x0F, 0x05, 0x00, // 0x4
	0x00, 0x80, 0x06, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 0x5
	0xAA, 0xAA, 0x00, 0x00, 0x10, 0x32, 0x54, 0x76, 0x98, 0xBA, 0xDC, 0xFE, 0x00, 0x00, 0x88, 0x88, // 0x6
	0xA8, 0x54, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 0x7
	#endif
#if 1///ryan@20180202
	0x00, 0x7F, 0xFF, 0x7F, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x31, 0x00, 0xD0, 0x00, 0x20, 0x28, // 0x8
	0x40, 0x7F, 0xFF, 0x7F, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x71, 0x00, 0xD0, 0x00, 0x20, 0x28, // 0x9
	0x80, 0x7F, 0xFF, 0x7F, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xB1, 0x00, 0xD0, 0x00, 0x20, 0x28, // 0xA
	0xC0, 0x7F, 0xFF, 0x7F, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xF1, 0x00, 0xD0, 0x00, 0x20, 0x28, // 0xB
#else
	0x01, 0x7F, 0xFF, 0x7F, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x31, 0x00, 0xD0, 0x00, 0x20, 0x28, // 0x8
	0x41, 0x7F, 0xFF, 0x7F, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x71, 0x00, 0xD0, 0x00, 0x20, 0x28, // 0x9
	0x81, 0x7F, 0xFF, 0x7F, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xB1, 0x00, 0xD0, 0x00, 0x20, 0x28, // 0xA
	0xC1, 0x7F, 0xFF, 0x7F, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xF1, 0x00, 0xD0, 0x00, 0x20, 0x28, // 0xB
#endif
	0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0xF0, 0xFF, 0x00, 0x3C, 0x4F, 0x00, 0x00, 0x00, 0x00, 0x00, // 0xC

	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 0xD
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 0xE
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x28, 0x00, // 0xF

};

code unsigned char TW2835_Page1[]={ 
//	NTSC	
	//00   01    02    03      04     05     06      07     08     09     0A     0B    0C     0D     0E     0F
	#if (TW2837TABLE==ON)
	0x00, 0x02, 0x00, 0x00, 0x00, 0x84, 0x00, 0x00, 0x00, 0x00, 0x00, 0xD7, 0x23, 0x2D, 0x1E, 0xA7,	// 1x0
	0x80, 0x02, 0x00, 0x00, 0x02, 0x00, 0x10, 0x00, 0x81, 0x02, 0x00, 0x01, 0x02, 0x00, 0x11, 0x00, // 1x1
	0x82, 0x02, 0x00, 0x02, 0x02, 0x00, 0x12, 0x00, 0x83, 0x02, 0x00, 0x03, 0x02, 0x00, 0x13, 0x00, // 1x2
	#else
	0x00, 0x02, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0xD7, 0x23, 0x2D, 0x1E, 0xA7,	// 1x0
	0x80, 0x02, 0x00, 0x00, 0x02, 0x00, 0x10, 0x00, 0x81, 0x02, 0x00, 0x01, 0x02, 0x00, 0x11, 0x00, // 1x1
	0x82, 0x02, 0x00, 0x02, 0x02, 0x00, 0x12, 0x00, 0x83, 0x22, 0x00, 0x03, 0x02, 0x00, 0x13, 0x00, // 1x2
	#endif
		#if (TW2837TABLE==ON)
		0x00, 0x5A, 0x00, 0x3C, 0x5A, 0xB4, 0x00, 0x3C, 0x00, 0x5A, 0x3C, 0x78, 0x5A, 0xB4, 0x3C, 0x78, // 1x3
		0x78, 0xB4, 0x28, 0x50, 0x00, 0x3C, 0x50, 0x78, 0x3C, 0x78, 0x50, 0x78, 0x78, 0xB4, 0x50, 0x78, // 1x4
		
		0x28, 0x00, 0x10, 0xA0, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xA7, // 1x5
		0x80, 0x02, 0x00, 0x81, 0x02, 0x00, 0x82, 0x02, 0x00, 0x83, 0x02, 0x00, 0x00, 0xE4, 0x00, 0x00, // 1x6
		0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x00, 0x8B, 0x84, // 1x7
		0xDF, 0x00, 0x91, 0x07, 0xEB, 0x10, 0xA8, 0x00, 0x91, 0xE7, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, // 1x8
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 1x9	
		#else
		0x00, 0x5A, 0x00, 0x3C, 0x5A, 0xB4, 0x00, 0x3C, 0x00, 0x5A, 0x3C, 0x78, 0x5A, 0xB4, 0x3C, 0x78, // 1x3
		0x78, 0xB4, 0x28, 0x50, 0x00, 0x3C, 0x50, 0x78, 0x3C, 0x78, 0x50, 0x78, 0x78, 0xB4, 0x50, 0x78, // 1x4
		
		0x28, 0x00, 0x10, 0xA0, 0x00, 0x80, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xA7, // 1x5
		0x80, 0x02, 0x00, 0x81, 0x02, 0x00, 0x82, 0x02, 0x00, 0x83, 0x22, 0x00, 0x00, 0xE4, 0x00, 0x00, // 1x6
		0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x00, 0x8B, 0x84, // 1x7
		0xDF, 0x00, 0x91, 0x07, 0xEB, 0x10, 0xA8, 0x00, 0x91, 0xE7, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, // 1x8
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 1x9
		#endif
	#if (TW2837TABLE==ON)
	0x56, 0x23, 0xd0, 0x01, 0x80, 0x20, 0x00, 0x0c, 0x20, 0x09, 0xAA, 0x00, 0x40, 0x40, 0x00, 0x00, // 1xA// 0x3//Kane @HS 2007 @HS 2007 Ver3.4
	#else
	0x77, 0x19/*0x11*/, 0xDF/*0xD7*/, 0x01, 0x80, 0x20, 0x00, 0x0E, 0x1F, 0x09, 0xAA, 0x00, 0x40, 0x40, 0x00, 0x00, // 1xA// 0x3//Kane @HS 2007 @HS 2007 Ver3.4
	#endif
	
	0x00, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x0F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 1xB
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 1xC
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 1xD
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 1xE
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 1xF

//	PAL
//   00    01    02    03    04    05    06    07    08    09    0A    0B    0C    0D    0E    0F
	0x80, 0x02, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0xD7, 0x23, 0x2D, 0x1E, 0xA7,	// 1x0
	0x80, 0x02, 0x00, 0x00, 0x02, 0x00, 0x10, 0x00, 0x81, 0x02, 0x00, 0x01, 0x02, 0x00, 0x11, 0x00, // 1x1
	0x82, 0x02, 0x00, 0x02, 0x02, 0x00, 0x12, 0x00, 0x83, 0x22, 0x00, 0x03, 0x02, 0x00, 0x13, 0x00, // 1x2

	0x00, 0x5A, 0x00, 0x48, 0x5A, 0xB4, 0x00, 0x48, 0x00, 0x5A, 0x48, 0x90, 0x5A, 0xB4, 0x48, 0x90, // 1x3
	0x78, 0xB4, 0x30, 0x60, 0x00, 0x3C, 0x60, 0x90, 0x3C, 0x78, 0x60, 0x90, 0x78, 0xB4, 0x60, 0x90, // 1x4

	0x28, 0x00, 0x10, 0xA0, 0x00, 0x80, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xA7, // 1x5
	0x80, 0x02, 0x00, 0x81, 0x02, 0x00, 0x82, 0x02, 0x00, 0x83, 0x22, 0x00, 0x00, 0xE4, 0x00, 0x00, // 1x6
	0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x00, 0x8B, 0x84, // 1x7
	0xDF, 0x00, 0x91, 0x07, 0xEB, 0x10, 0xA8, 0x00, 0x91, 0xE7, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, // 1x8
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 1x9
	#if (TW2837TABLE==ON)
	0x56, 0x19, 0xDF, 0x01, 0x80, 0x20, 0x00, 0x0C, 0x21, 0x44, 0xAA, 0x00, 0x40, 0x40, 0x00, 0x00, // 1xA// 0x3//Kane @HS 2007 @HS 2007 Ver3.4
	#else
	0x77,  0x19/*0x11*/, 0xDF/*0xD7*/, 0x01, 0x80, 0x20, 0x00, 0x0C, 0x21, 0x44, 0xAA, 0x00, 0x40, 0x40, 0x00, 0x00, // 1xA// 0x3//Kane @HS 2007 @HS 2007 Ver3.4
	#endif	
	0x00, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x0F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 1xB
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 1xC
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 1xD
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 1xE
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 1xF

};

#if (TW2837TABLE==ON)
code unsigned char TW2835_Page2[]={ 
//	NTSC	
	//00   01    02    03      04     05     06      07     08     09     0A     0B    0C     0D     0E     0F

	//... mouse & LUT
	0xf0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,	//...  0x10
	//... single box
	0x00,0xb0,0x00,0x00,0x00,0x00,0x40,0x00,	0x00,0x00,0x00,0x00,0x00,0xb0,0x00,0x00,	//...  0x20
	0x00,0x00,0x40,0x00,0x00,0x00,0x00,0x00,	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,	//...  0x30

	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,	0x00,0x00,0x00,0x40,0x40,0x40,0x42,0xff,	//...  0x50

	//... quad position
	0x88,0x00,0x01,0x0a,0x00,0x09,0xfb,0x00,	0x89,0x00,0x5b,0x0a,0x00,0x09,0xfb,0x00,	//...  0x60
	0x8a,0x00,0x01,0x0a,0x3c,0x09,0xfb,0x00,	0x8b,0x00,0x5b,0x0a,0x3c,0x09,0xfb,0x00,	//...  0x70

	0x17,0x73,0x88,0x4a,0x07,0x24,0x00,0x00,	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,	//...  0x80
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00	//...  0x90
};
#endif


//--------------------------		NTSC		------------------------------//
//... H: 45(2d),90(5a),135(87),60(3c),120(78),180(b4)
//... V: 30(1e),40(28),60(3c),80(50),90(5a),120(78) for NTSC
//... V: 36(24),48(30),72(48),96(60),108(6c),144(90) for PAL
code unsigned char	tbl_ntsc_pg1_pic_fl[] = {
//  00   01   02   03   04   05   06   07		 08   09   0A   0B   0C   0D   0E   0F
	0x00,0xb4,0x00,0x78,0x00,0xb4,0x00,0x78,	0x00,0xb4,0x00,0x78,0x00,0xb4,0x00,0x78	//...  
};

code unsigned char	tbl_ntsc_pg1_pic_qd[] = {
//  00   01   02   03   04   05   06   07		 08   09   0A   0B   0C   0D   0E   0F
	0x00,0x5a,0x00,0x3c,0x5a,0xb4,0x00,0x3c,	0x00,0x5a,0x3c,0x78,0x5a,0xb4,0x3c,0x78	//...  
};

 code unsigned char	tbl_ntsc_pg1_pic_9_lt[] = {
//  00   01   02   03   04   05   06   07		 08   09   0A   0B   0C   0D   0E   0F
	0x00,0x3c,0x00,0x28,0x3c,0x78,0x00,0x28,	0x78,0xb4,0x00,0x28,0x00,0x3c,0x28,0x50	//...   
};

code unsigned char	tbl_ntsc_pg1_pic_9_rb[] = {
//  00   01   02   03   04   05   06   07		 08   09   0A   0B   0C   0D   0E   0F
	0x78,0xb4,0x28,0x50,0x00,0x3c,0x50,0x78,	0x3c,0x78,0x50,0x78,0x78,0xb4,0x50,0x78	//...   
};

//--------------------------		NTSC		------------------------------//
code unsigned char	tbl_ntsc_pg1_enc[] = {
//  00   01   02   03   04   05   06   07		 08   09   0A   0B   0C   0D   0E   0F
#if (TW2837==ON)
	0x56,
#else
	0x66,
#endif

	0x23,0xd0,0x01,0x80,0x20,0x00,0x0c,	0x20,0x09,0xaa,0x00,0x40,0x40,0x00,0x00	//... 0xa0
};


code unsigned char	tbl_pal_pg1_pic_qd[] = {
//  00   01   02   03   04   05   06   07		 08   09   0A   0B   0C   0D   0E   0F
	0x00,0x5a,0x00,0x48,0x5a,0xb4,0x00,0x48,	0x00,0x5a,0x48,0x90,0x5a,0xb4,0x48,0x90	//...   
};

code unsigned char	tbl_pal_pg1_pic_9_lt[] = {
//  00   01   02   03   04   05   06   07		 08   09   0A   0B   0C   0D   0E   0F
	0x00,0x3c,0x00,0x30,0x3c,0x78,0x00,0x30,	0x78,0xb4,0x00,0x30,0x00,0x3c,0x30,0x60	//...    
};

code unsigned char	tbl_pal_pg1_pic_9_rb[] = {
//  00   01   02   03   04   05   06   07		 08   09   0A   0B   0C   0D   0E   0F
	0x78,0xb4,0x30,0x60,0x00,0x3c,0x60,0x90,	0x3c,0x78,0x60,0x90,0x78,0xb4,0x60,0x90	//...   
};

//--------------------------		PAL		------------------------------//
code unsigned char	tbl_pal_pg1_enc[] = {
//  00   01   02   03   04   05   06   07		 08   09   0A   0B   0C   0D   0E   0F
#ifdef TW2837
	0x56,
#else
	0x66,
#endif
	0x23,0xd0,0x01,0x80,0x20,0x00,0x0c,	0x20,0x4c,0xaa,0x00,0x40,0x40,0x00,0x00	//... 0xa0
};






// ===========================================================================
// END of File
// ===========================================================================


