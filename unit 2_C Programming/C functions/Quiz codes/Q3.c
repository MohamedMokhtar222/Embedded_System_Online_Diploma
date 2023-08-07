/*
 * main.c
 *
 *  Created on: Aug 7, 2023
 *      Author: mok
 */

#include<stdio.h>

int reverse(int a[],int n)
{
	int i,temp[100];
	printf("\nreversed array: ");
	for(i=0;i<n;i++)
	{
		temp[i]=a[n-i-1];
		printf("%d ",temp[i]);
	}
	return 0;
}

int main(void)
{
	int i,n,a[100];
	printf("Enter the size of array: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);

	printf("Enter the elements of array:\n");
		for(i=0;i<n;i++)
		{
			printf("Enter element %d: ",i+1);
			fflush(stdin); fflush(stdout);
			scanf("%d",&a[i]);
		}
		printf("the array array: ");
			for(i=0;i<n;i++)
			{
				printf("%d ",a[i]);
			}
		reverse(a,n);
}
