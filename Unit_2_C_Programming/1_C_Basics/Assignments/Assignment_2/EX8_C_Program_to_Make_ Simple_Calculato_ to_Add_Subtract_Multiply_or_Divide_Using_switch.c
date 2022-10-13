/*
 * EX8_C_Program_to_Make_ Simple_Calculato_ to_Add_Subtract_Multiply_or_Divide_Using_switch.c
 *
 *  Created on: Oct 13, 2022
 *      Author: Abdullah Mahmoud
 */
#include <stdio.h>
int main()
{
	float x,y;
	char choice;
	printf("Enter the operator :");
	fflush(stdout);
	scanf("%c",&choice);
	printf("Enter the value of x and y");
	fflush(stdout);
	scanf("%f %f",&x,&y);
	switch(choice)
	{
	case '+':
		printf("%0.1f + %0.1f = %0.1f",x,y,x+y);
		break;
	case '-':
		printf("%0.1f - %0.1f = %0.1f",x,y,x-y);
		break;
	case '*':
		printf("%0.1f * %0.1f = %0.1f",x,y,x*y);
		break;
	case '/':
		printf("%0.1f * %0.1f = %0.1f",x,y,x/y);
		break;
	}
	return 0;
}


