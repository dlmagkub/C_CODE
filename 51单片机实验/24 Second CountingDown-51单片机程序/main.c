#include <REGX52.H>
#include "Delay.h"
//#include "LCD1602.h"
#include "Timer0.h"
#include "NIXIE.H"

char Sec=2,Min=1,Hour=0;

void main()
{
	Timer0Init();
	
	while(1)
	{
		Nixie(5,Hour);
		
		Nixie(6,Min);
		
		Nixie(7,Sec);
	}
}

void Timer0_Routine() interrupt 1
{
	static unsigned int T0Count;
	TL0 = 0x18;	
	TH0 = 0xFC;	
	T0Count++;
	if(T0Count>=1000)
	{
		T0Count=0;
		Sec--;
		if(Sec==-1)
		{
			Sec=9;
			Min--;
			if((Min==-1)&&(Sec==9))
			{
				Min=2;
				Sec=4;
//				Hour--;
//				if(Hour==-1)
//				{
//					Hour=0;
//					if()
//					{
//					Sec=4;
//					Min=2;
//					}
//				}
			}
		}
	}
}

