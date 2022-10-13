/*
 * EX1_C_Program_To_check_whether_number_is_Even_or_Odd.c
 *
 *  Created on: Oct 13, 2022
 *      Author: Abdullah Mahmoud
 */
#include<stdio.h>
int main()
{
	int x;
	printf("Enter the number:");
	fflush(stdout);
	scanf("%d",&x);
	if((x%2) ==0)
	{
		printf("The number is even");
	}
	else
	{
		printf("The number is odd");
	}
	return 0;
}


