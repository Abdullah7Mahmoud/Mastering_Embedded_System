/*
 * EX2_C_Program_To_Print_a_Integer_Entered_by_a_User.c
 *
 *  Created on: Oct 13, 2022
 *      Author: Abdullah Mahmoud
 */
#include <stdio.h>
int main()
{
	int x;
	printf("Enter a integer number");
	fflush(stdout);
	fflush(stdin);
	scanf("%d",&x);
	printf("You entered: %d",x);
	return 0;
}

