/*
 * EX7_C_Program_To_Swap_Two_Numbers_Without_Temp_Variable.c
 *
 *  Created on: Oct 13, 2022
 *      Author: Abdullah Mahmoud
 */
#include <stdio.h>
int main()
{
	int x=5, y=6;
	x = x + y;
	y = x - y;
	x = x - y;
	printf("After swapping, value of x = %d\n",x);
	printf("After swapping, value of y = %d",y);
	return 0;

}

