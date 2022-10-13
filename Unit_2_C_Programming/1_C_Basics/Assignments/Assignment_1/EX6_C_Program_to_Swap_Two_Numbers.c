/*
 * EX6_C_Program_to_Swap_Two_Numbers.c
 *
 *  Created on: Oct 13, 2022
 *      Author: Abdullah Mahmoud
 */
#include <stdio.h>

int main()
{
	float x,y,z;

	printf("Enter value of x and y: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%f %f",&x,&y);
	z = x;
	x = y;
	y = z;
	printf("\nAfter swapping, value of x = %.2f\n", x);
	printf("After swapping, value of y = %.2f", y);

	return 0;
}

