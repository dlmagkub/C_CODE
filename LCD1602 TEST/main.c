#include <REGX52.H>
#include "LCD1602.h"

void main()
{	
//LCD_Init();
	while(1)
	{
	LCD_Init();	
//	LCD_ShowChar(1,1,'A');
//	LCD_ShowNum(1,2,24,2);
//	LCD_ShowString(1,4,"BCDE");
//	LCD_ShowSignedNum(unsigned char Line,unsigned char Column,int Number,unsigned char Length);
	LCD_ShowHexNum(1,1,11,8);
	LCD_ShowBinNum(2,1,0x09,8);
	}
		
	
}