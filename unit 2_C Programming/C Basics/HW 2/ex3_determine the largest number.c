/*
 * main.c
 *
 *  Created on: Jul 17, 2023
 *      Author: mok
 */
#include "stdio.h"
int main(int argc, char **argvd)
{
	float a,b,c;
	printf("Enter three numbers:");
	fflush(stdin); fflush(stdout);
	scanf("%f %f %f", &a, &b, &c);
	if (a>b)
	{
		if(a>c)
		{
			printf("largest number=%f",a);
		}
		else
		{
			printf("largest number=%f",c);
		}
	}
	else
	{
		if(b>c)
		{
			printf("largest number=%f", b);
		}
		else
		{
			printf("largest number=%f", c);
		}
	}
}


