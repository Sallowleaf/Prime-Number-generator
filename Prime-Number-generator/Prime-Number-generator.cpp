// Prime-Number-generator.cpp : Generates Prime Numbers.
//

#include "stdafx.h"
#include<math.h>
#include<vector>



int main()
{
	int temp;
	int Result = 0;
	int Remainder;
	int R2 = 0;

	for (int i = 1; i <= 20; i++)
	{
		temp = sqrt(i);
		for (int t = 1; t <= temp; t++)
		{
			Remainder = (i%t);
			R2 += Remainder;
		}
		if (R2 > temp)
		{
			//Result = R2;
			std::cout << i << "\n";
		}
		//std::cout << Result << "\n";
	}
	return 0;
}