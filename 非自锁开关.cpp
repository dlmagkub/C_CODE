include <REGX52.h>

void Delay(unsigned int xms)
{
	while (xms)		//不用写成（xms>0)
	{
		unsigned char i , j;	//char 是为了节省空间

		i = 2 ;
		j = 239 ;
		do
		{
		while (--j) ;
		} while (--i) ;
	xms--;
	}
}

void main()
{
	while(1)
	{
		if(P3_1==0)
		{
			Delay（20）;	
			while(P3_1==0) ;	//此处检测开关的开合，主义开关不是自锁的。
			Delay（20）;
			
			P2_0=~P2_0 ;	//此处控制灯的开灭
		}
	}
}