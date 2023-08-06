/*
 * main.c
 *
 *  Created on: Aug 6, 2023
 *      Author: mok
 */

#include<stdio.h>

int power(int x,int y)
{
	static int f=1;
	if(y!=0)
	{
		f=f*x;
		y--;
		power(x,y);
	}
	return f;
}

int main(void)
{
	int n,p;
	printf("Enter base number: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);
	printf("Enter the power number(positive integer): ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&p);
	printf("%d^%d = %d",n,p,power(n,p));
}
