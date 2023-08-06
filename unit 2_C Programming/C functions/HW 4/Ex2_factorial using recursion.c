/*
 * main.c
 *
 *  Created on: Aug 6, 2023
 *      Author: mok
 */

#include<stdio.h>
int factorial(int x)
{
	static int f=1;
	if(x>1)
	{
		f=f*x;
		x--;
		factorial(x);
	}
	return f;
}
int main(void)
{
	int a;
	printf("Enter an positve number: ");
	fflush(stdin); fflush(stdout);
		scanf("%d",&a);
		printf("factorial of %d = %d",a,factorial(a));
}
