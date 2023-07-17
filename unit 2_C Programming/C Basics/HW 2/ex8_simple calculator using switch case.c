/*
 * main.c
 *
 *  Created on: Jul 17, 2023
 *      Author: mok
 */
#include<stdio.h>
int main(void)
{
	char sign;
	float a,b,operation;
	printf("Enter operator either + or - or * or / : ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&sign);
	printf("Enter two operands: ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f",&a,&b);
	switch(sign)
	{
	case '+':
	{
		operation=a+b;
		printf("%f+%f=%f",a,b,operation);
	}
	break;
	case '-':
	{
		operation=a-b;
		printf("%f-%f=%f",a,b,operation);
	}
	break;
	case '*':
	{
		operation=a*b;
		printf("%f*%f=%f",a,b,operation);
	}
	break;
	case'/':
	{
		operation=a/b;
		printf("%f/%f=%f",a,b,operation);
	}
	break;
	}
}

