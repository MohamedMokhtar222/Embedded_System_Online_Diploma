/*
 * main.c
 *
 *  Created on: Aug 7, 2023
 *      Author: mok
 */

#include<stdio.h>

int bits(int x)
{
	int f;
	x&=1<<3;
	if(x>0)
	{
		f=1;
	}
	else
	{
		f=0;
	}
		return f;
}

int main(void)
{
	int num;
	printf("Enter the number: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);
	printf("the value of the 4th significant bit is: %d",bits(num));
}
