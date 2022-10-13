/*
 * EX4_C_Program_to_Multiply_Two_Floating_Point_Numbers.c
 *
 *  Created on: Oct 13, 2022
 *      Author: Abdullah Mahmoud
 */
#include<stdio.h>
int main()
{
	float x,y,Product;
	printf("Enter two numbers:");
	fflush(stdout);
	fflush(stdin);
	scanf("%f %f",&x,&y);
	Product = x*y;
	printf("Product = %f", Product);
	return 0;
}

