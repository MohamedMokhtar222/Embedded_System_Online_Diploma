/*
 * main.c
 *
 *  Created on: Aug 7, 2023
 *      Author: mok
 */

#include<stdio.h>

int swap(int a[],int b[],int x,int y)
{
	int i;
	int c[100];
	for(i=0;i<y;i++)
	{
		c[i]=a[i];
		a[i]=b[i];
		b[i]=c[i];
	}
	printf("\narray1 after swapping:");
	for(i=0;i<y;i++)
	{
		printf("%d ",a[i]);
	}

	printf("\narray2 after swapping:");
	for(i=0;i<x;i++)
	{
		printf("%d ",b[i]);
	}
	return 0;
}

int main(void)
{
	int a[100],b[100];
	int i,size1,size2;

	printf("Enter the size of array1: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&size1);

	printf("Enter the size of array2: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&size2);

	printf("Enter the elements of array1:\n");
	for(i=0;i<size1;i++)
	{
		printf("Enter element %d: ",i+1);
		fflush(stdin); fflush(stdout);
		scanf("%d",&a[i]);
	}

	printf("Enter the elements of array2: \n");
	for(i=0;i<size2;i++)
	{
		printf("Enter element %d: ",i+1);
		fflush(stdin); fflush(stdout);
		scanf("%d",&b[i]);
	}

	printf("array1 before swapping: ");
	for(i=0;i<size1;i++)
	{
		printf("%d ",a[i]);
	}

	printf("\narray2 before swapping: ");
	for(i=0;i<size2;i++)
	{
		printf("%d ",b[i]);
	}
	swap(a,b,size1,size2);
}


