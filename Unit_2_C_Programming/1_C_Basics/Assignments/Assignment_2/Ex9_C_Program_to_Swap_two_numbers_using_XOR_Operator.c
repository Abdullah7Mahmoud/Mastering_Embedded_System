/*
 * C Program to Swap two numbers using XOR Operator.c
 *
 *  Created on: Oct 14, 2022
 *      Author: Abdullah Mahmoud
 */
#include<stdio.h>
int main()
{
	int x, y;

	printf("Enter  the value of x and y : ");
	fflush(stdout);
	fflush(stdin);
	scanf("%d %d", &x, &y);
	x = x ^ y;
	y = x ^ y;
	x = x ^ y;

	printf("\n Numbers after Exchange : ");
	printf("\n x = %d and y = %d", x, y);

	return 0;
}

