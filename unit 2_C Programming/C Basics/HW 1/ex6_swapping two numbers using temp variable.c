/*
 * main.c
 *
 *  Created on: Jul 17, 2023
 *      Author: mok
 */
#include <stdio.h>
int main(void)
{
	float a,b,swap;
	printf("Enter value of a:");
	fflush(stdin); fflush(stdout);
	scanf("%f",&a);
	printf("Enter value of b:");
		fflush(stdin); fflush(stdout);
		scanf("%f",&b);
	swap=a;
	a=b;
	b=swap;
	printf("\nAfter swapping, value of a=%f\n",a);
	printf("After swapping, value of b=%f\n",b);
}

