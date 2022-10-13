/*
 * EX3_C_Program_To_check_Whether_Number_is_Postive_or_Negative.c
 *
 *  Created on: Oct 13, 2022
 *      Author: Abdullah Mahmoud
 */
#include <stdio.h>
int main()
{
	float x;
	printf("Enter the number :");
	fflush(stdout);
	scanf("%f",&x);
	if(x > 0)
	{
		printf("The number is Positive");
	}
	else if (x < 0)
	{
		printf("The number is Negative");
	}
	else
	{
		printf("The number is zero");
	}
	return 0;
}


