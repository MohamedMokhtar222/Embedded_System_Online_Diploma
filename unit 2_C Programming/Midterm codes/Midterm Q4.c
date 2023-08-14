/*
 * main.c
 *
 *  Created on: Aug 14, 2023
 *      Author: mok
 */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int reverse(char arr[],int n)
{
	char rev[100];
	int i,y;
	for(i=0;i<n;i++)
	{
		rev[i]=arr[n-i-1];
	}
	y=atoi(rev);
	return y;
}

int main(void)
{
	char a[100];
	printf("Enter the number: ");
	fflush(stdin); fflush(stdout);
	gets(a);
	printf("the reversed number is: %d",reverse(a,strlen(a)));
}
