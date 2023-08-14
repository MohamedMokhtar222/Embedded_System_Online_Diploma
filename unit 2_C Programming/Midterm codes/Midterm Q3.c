/*
 * main.c
 *
 *  Created on: Aug 13, 2023
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
	int n1,n2,i,flag;
	printf("Enter two numbers(intervals): \n");
	printf("Enter n1: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n1);
	printf("Enter n2: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n2);
	printf("prime numbers between %d and %d are: ",n1,n2);
	for(i=n1;i<n2;i++)
	{
		flag=prime(i);
		if (flag==0 && i!=1)
		{
			printf("%d ",i);
		}
	}
}
