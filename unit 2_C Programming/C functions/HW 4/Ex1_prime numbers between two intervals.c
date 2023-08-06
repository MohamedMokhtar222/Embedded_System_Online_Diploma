/*
 * main.c
 *
 *  Created on: Aug 6, 2023
 *      Author: mok
 */

#include<stdio.h>
int prime(int x)
{
	int j,flag;
	flag=0;
	for(j=2;j<x;j++)
	{
		if(x%j==0)
		{
			flag=1;
			break;
		}
	}
	return flag;
}
int main(void)
{
	int a,b,i,flag;
	printf("Enter two numbers(intervals): ");
	fflush(stdin); fflush(stdout);
	scanf("%d %d",&a,&b);
	printf("prime numbers between %d and %d are: ",a,b);
	for(i=a;i<b;i++)
	{
		flag=prime(i);
		if (flag==0)
		{
			printf("%d ",i);
		}
	}
}
