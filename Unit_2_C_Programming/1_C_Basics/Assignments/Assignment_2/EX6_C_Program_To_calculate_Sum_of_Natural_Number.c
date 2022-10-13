/*
 * EX6_C_Program_To_calculate_Sum_of_Natural_Number.c
 *
 *  Created on: Oct 13, 2022
 *      Author: Abdullah Mahmoud
 */

#include <stdio.h>
int main()
{
	int i,sum=0,number;
	printf("Enter the number:");
	fflush(stdout);
	scanf("%d",&number);
	for(i=0 ; i<=number ; i++)
	{
		sum = sum+i;
	}
	printf("Sum is %d",sum);
	return 0;
}


