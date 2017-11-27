// Prime-Number-generator.cpp : Generates Prime Numbers.
//

#include "stdafx.h"
#include<iostream>
#include<math.h>
#include<vector>



int main()
{
	int Result = 1;
	int Remainder = 0;
	int R2 = 1;

	for (int i = 1; i <= 20; i++)
	{
		
		Result = 1;
		for (int t = 2; t <= sqrt(i); t++)
		{
			Remainder = (i%t);
			Result *= Remainder;
		}

		if (Result != 0)
			std::cout << i << "\n";

	}
	return 0;
}