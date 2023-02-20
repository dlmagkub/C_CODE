#include <REGX52.H>
//#include "LCD1602.h"
#include "DS1302.h"
#include "NIXIE.H"
#include "DELAY.H"


void main()
{
	DS1302_SetTime();//设置时间	
	while(1)
	{
		DS1302_ReadTime();//读取时间
		Delay(1);
		Nixie(1,DS1302_Time[4]);
		Delay(1);
		Nixie(2,DS1302_Time2[4]);		
		Delay(1);
		Nixie(3,DS1302_Time[5]);
		Delay(1);
		Nixie(4,DS1302_Time2[5]);
		Delay(1);
	}
}




