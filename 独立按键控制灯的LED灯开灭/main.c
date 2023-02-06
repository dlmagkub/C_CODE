#include <REGX52.H>
#include "LCD1602.h"

void main()
{	
P2_0=1;	
	while(1)
	{
		if(P3_1==0)
		{	
			while(P3_1==0);
			P2_0=~(P2_0);		//È¡·´
		}
		
	}
}