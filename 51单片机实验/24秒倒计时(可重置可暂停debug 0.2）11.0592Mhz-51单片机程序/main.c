#include <REGX52.H>
#include "Nixie.h"
#include "DELAY.H"
#include "KEY.h"

int Sec=2,Min=0,Hour=0;

void Timer0_Init(void)		//11.0592MHz
{
	TMOD &= 0xF0;
	TMOD |= 0x01;
	TL0 = 0x66;	
	TH0 = 0xFC;	
	TF0 = 0;				
	TR0 = 1;
	ET0=1;
	EA=1;
	PT0=0;
}

void R1() interrupt 1
{
	static unsigned int T0Count;
	TL0 = 0x66;	
	TH0 = 0xFC;	
	T0Count++;
	if(T0Count>=1000)
	{
		T0Count=0;
		Sec--;		//sec=0 min=0 hour=0  reset=24
		if(Sec==-1)
		{
			Sec=9;		
			Min--;
			if(Min==-1)
			{
				Min=0;
				Hour--;
				if((Hour==-1)&&(Sec==9)&&(Min==0))
				{
					Sec=4;
					Min=2;
					Hour=0;	
				}
			}
		}
	}
}


void main()
{
//	Timer0_Init();		//����ԭ��û�������������м��붨ʱ������
	while(1)
	{
	//Timer0_Init();
	Delay(3);
	//Nixie(6,Hour);
	Delay(3);
	Nixie(7,Min);
	Delay(3);
	Nixie(8,Sec);
		switch(Key())
		{
			case 1 :	EA=~(EA);
						break;
			case 2 :	Sec=0;
						Min=0;
						break;
			case 4 : 	Timer0_Init();
						break;
		}
		
		
		
	}
		
	
}