#include <REGX52.H>
#include "DELAY.H"

int dot[]={0x00,0x01,0x02,0x1C,0xF4,0x54,0x5C,0xFF};

sbit copy=P3^5;
sbit writein=P3^4;
sbit downone=P3^6;

void columecontent(int input);		//提前声明函数，避免因为顺序不对的问题error：redefination   	             
void RowSelect(int RowNum,input);

void Timer0(void)		//20??@11.0592MHz
{
	TMOD &= 0xF0;			//???????
	TMOD |= 0x01;			//???????
	TL0 = 0x00;				//???????
	TH0 = 0xB8;				//???????
	TF0 = 0;				//??TF0??
	TR0 = 1;
	ET0=1;
	EA=1;
	PT0=0;
}

void last() interrupt 1
{
	static unsigned int T0Count;
	TL0 = 0x00;				
	TH0 = 0xB8;	
	T0Count++;
	if(T0Count>=50)
	{
	T0Count=0;
		while(1)
		{
		RowSelect(0,dot[0]);	 
		Delay(2);	
		RowSelect(1,dot[0]);	
		Delay(2);
		RowSelect(2,dot[0]);	
		Delay(2);
		RowSelect(3,dot[0]);	
		Delay(2);
		RowSelect(4,dot[7]);	
		Delay(2);
		RowSelect(5,dot[0]);	
		Delay(2);
		RowSelect(6,dot[0]);
		Delay(2);
		RowSelect(7,dot[0]);	
		Delay(2);
		downone=0;
		copy=0;	
		}
	}
}

void columecontent(int input)  //写入列的数据
{
	unsigned char i;
	for(i=0;i<8;i++)
	{
		writein=input&(0x80>>i);
		downone=1;
		downone=0;
	}
	copy=1;
	copy=0;
}

void RowSelect(int RowNum,input)		//函数后面不能加；否则会出错。低级错误。电脑会以为后面的P0重新定义了，和源文件里面的已经定义的P0=0x80相冲突，显示error：P0 redefination
{
columecontent(input);
P0 = ~(0x80>>RowNum);			
}


void main()
{
	
	Timer0();
	while(1)
	{
	RowSelect(0,dot[0]);	 
	Delay(2);	
	RowSelect(1,dot[1]);	
	Delay(2);
	RowSelect(2,dot[2]);	
	Delay(2);
	RowSelect(3,dot[3]);	
	Delay(2);
	RowSelect(4,dot[4]);	
	Delay(2);
	RowSelect(5,dot[5]);	
	Delay(2);
	RowSelect(6,dot[6]);
	Delay(2);
	RowSelect(7,dot[0]);	
	Delay(2);
	downone=0;
	copy=0;	
	}
	
}