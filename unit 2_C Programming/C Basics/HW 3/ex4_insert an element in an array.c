/*
 * main.c
 *
 *  Created on: Jul 29, 2023
 *      Author: mok
 */

#include<stdio.h>
int main(void)
{
	int i,n,a[100],loc,element;
	printf("Enter no of elements: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("%d ",i+1);
		a[i]=i+1;
	}
	printf("\n\nEnter the element to be inserted: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&element);
	fflush(stdin); fflush(stdout);
	printf("\nEnter the location: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&loc);
	for(i=n;i>=loc;i--)
	{
		a[i]=a[i-1];
	}
	a[loc-1]=element;
	for (i=0;i<=n;i++)
	{
		printf("%d\t",a[i]);
	}
}
