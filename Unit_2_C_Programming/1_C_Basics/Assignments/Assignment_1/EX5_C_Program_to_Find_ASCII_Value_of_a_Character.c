/*
 * EX5_C_Program_to_Find_ASCII_Value_of_a_Character.c
 *
 *  Created on: Oct 13, 2022
 *      Author: Abdullah Mahmoud
 */
#include<stdio.h>
int main()
{
	char c;
	printf("Enter a character:");
	fflush(stdout);
	fflush(stdin);
	scanf("%c",&c);
	printf("ASCII value of %c = %d",c,c);
	return 0;

}

