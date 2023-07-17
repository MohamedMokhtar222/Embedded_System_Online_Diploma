/*
 * main.c
 *
 *  Created on: Jul 17, 2023
 *      Author: mok
 */
#include<stdio.h>
int main(void)
{
	float a;
	printf("Enter a number: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&a);
	if(a>0)
	{
		printf("%f is positive.",a);
	}
	else if(a<0)
	{
		printf("%f is negative.",a);
	}
	else
	{
		printf("You entered zero.",a);
	}
}

