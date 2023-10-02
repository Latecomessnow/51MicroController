#include <REGX52.H>

void main()
{
	while (1)
	{
		//if (P3_1 == 0 && P3_0 == 0)
		if (P3_1 == 0)
		{
			//P2 = 0xFE;
			P2_0 = 0;
		}
		else
		{
			//P2 = 0xFF;
			P2_0 = 1;
		}
	}
}
