/*
 * EX3_C_Program_to_Add_Two_Integers.c
 *
 *  Created on: Oct 13, 2022
 *      Author: Abdullah Mahmoud
 */
#include <stdio.h>
int main()
{
	int x,y,sum;
	printf("Enter two integer numbers:");
	fflush(stdout);
	fflush(stdin);
	scanf("%d %d",&x,&y);
	sum = x+y;
	printf("sum = %d",sum);
	return 0;
}

