/*
 * main.c
 *
 *  Created on: Jul 30, 2023
 *      Author: mok
 */

#include<stdio.h>
int main(void)
{
	int i,a[100],n,num;
	printf("Enter no of elements: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		a[i]=(i+1)*11;
		printf("%d ",a[i]);
	}
	printf("\n");
	printf("Enter the elements to be seached: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);
	for(i=0;i<n;i++)
	{
		if(a[i]==num)
		{
			printf("number found at location = %d ",i+1);
		}
	}
}
