/*
 * EX2_C_Program_To_check_vowel_or_consonant.c
 *
 *  Created on: Oct 13, 2022
 *      Author: Abdullah Mahmoud
 */
#include <stdio.h>
int main()
{
	char c;
	printf("Enter an alphabet:");
	fflush(stdout);
	scanf("%c",&c);
	if(c == 'A'|| c =='a' || c == 'E' || c == 'e' || c == 'I' || c == 'i' || c == 'O' || c == 'o' || c == 'U' || c == 'u' )
	{
		printf("alphabet is vowel");
	}
	else
	{
		printf("alphabet is consonant");
	}
	return 0;
}


