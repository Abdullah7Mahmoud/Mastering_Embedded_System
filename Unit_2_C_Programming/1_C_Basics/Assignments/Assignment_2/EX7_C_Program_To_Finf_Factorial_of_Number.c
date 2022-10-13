/*
 * EX6_C_Program_To_Finf_Factorial_of_Number.c
 *
 *  Created on: Oct 13, 2022
 *      Author: Abdullah Mahmoud
 */
#include <stdio.h>
int main()
{
	int x,y,Factorial=1;
	printf("Enter  the number");
	fflush(stdout);
	scanf("%d",&x);
	if(x < 0)
	{
		printf("Cannot use negative number");
	}
	else
	{
		for(y = 1 ; y <= x; y++ )
		{
			Factorial = Factorial * y;
		}
		printf("Factorial = %d",Factorial);
	}
	return 0;
}

