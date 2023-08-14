/*
 * main.c
 *
 *  Created on: Aug 13, 2023
 *      Author: mok
 */

#include<stdio.h>
int sum(int x)
{
	int a,b,c,d,e,f,n;

	a=x%10;
	b=x%100;
	c=x%1000;
	d=x%10000;
	e=x%100000;
	f=x%1000000;

	f=(f-e)/100000;
	e=(e-d)/10000;
	d=(d-c)/1000;
	c=(c-b)/100;
	b=(b-a)/10;

	n=a+b+c+d+e+f;
	return n;
}
int main(void)
{
	int num;
	printf("Enter the numbers:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);
	printf("the sum is %d",sum(num));
}
