#include <INTRINS.H>

void Delay(unsigned short rms)		//@11.0592MHz
{
		while(rms--)
		{
		unsigned char i, j;

		_nop_();
		i = 2;
		j = 199;
		do
			{
				while (--j);
			} while (--i);
		}
}