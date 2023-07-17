/*
 * main.c
 *
 *  Created on: Jul 17, 2023
 *      Author: mok
 */
#include<stdio.h>
int main(void)
{
	int a,i,factorial;
	factorial=1;
	printf("Enter an integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&a);
	if(a>=0)
	{
		for(i=1;i<=a;i++)
			{
			factorial=factorial*i;
			}
		printf("Factorial=%d",factorial);
	}
	else
	{
		printf("Error!!! Factorial of negative number doesn't exist.");
	}
}

