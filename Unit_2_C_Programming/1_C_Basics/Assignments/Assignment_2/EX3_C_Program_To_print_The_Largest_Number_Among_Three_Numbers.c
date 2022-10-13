/*
 * The Largest Number Among Three Numbers.c
 *
 *  Created on: Oct 12, 2022
 *      Author: Abdullah Mahmoud
 */
#include <stdio.h>
int main()
{
	float x,y,z;
	printf("Enter the value of x and y and z");
	fflush(stdout);
	fflush(stdin);
	scanf("%f %f %f",&x,&y,&z);
	if(x>y && x>z)
	{
		printf("x in the largest value");
	}
	else if (y>x && y>z)
	{
		printf("y in the largest value");
	}
	else
	{
		printf("z in the largest value");
	}
	return 0;
}


