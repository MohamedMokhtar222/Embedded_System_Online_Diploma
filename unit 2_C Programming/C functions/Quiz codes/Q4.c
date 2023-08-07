/*
 * main.c
 *
 *  Created on: Aug 7, 2023
 *      Author: mok
 */

#include<stdio.h>

int ascii(char a[],int n)
{
	int i,sum=0,product=1;
	for(i=n-1;i>=0;i--)
	{
		if(n-i-1!=0)
		{
			product=product*10;
			sum=sum+(product*(a[i]-'0'));
		}
		else
		{
			sum=sum+(a[i]-'0');
		}
	}
	return sum;
}

int main(void)
{
	char a[100];
	int n;
	printf("Enter the number of elements: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);
	printf("Enter the elements of array: ");
	fflush(stdin); fflush(stdout);
	gets(a);
	printf("%d",ascii(a,n));
}
