// Prime-Number-generator.cpp : Generates Prime Numbers.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>

int main()
{
	int Result = 1;
	int Remainder = 0;
	int Limit;

	std::cout << "Give me limit, Infinity is bothersome!";

	std::cin >> Limit;
	if (1 <= Limit)
	{
		for (int i = 1; i <= Limit; i++)
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
	}
	else
		std::cout << "Check this: YouTube.com. \n";

	return 0;
}