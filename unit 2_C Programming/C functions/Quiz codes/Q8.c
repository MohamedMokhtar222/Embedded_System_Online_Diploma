/*
 * main.c
 *
 *  Created on: Aug 7, 2023
 *      Author: mok
 */

#include<stdio.h>

int fun(int a[],int num,int n)
{
	int i,occ=-100;
	for (i=0;i<n;i++)
	{
		if(a[i]==num)
			occ=i;
	}
	if(occ==-100)
		occ=-1;
	return occ;
}

int main(void)
{
	int i,n,num,a[100];
	printf("Enter the number of elements: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);
	printf("Enter the elements of array:\n");
	for(i=0;i<n;i++)
	{
		printf("Enter elements %d: ",i+1);
		fflush(stdin); fflush(stdout);
		scanf("%d",&a[i]);
	}
	printf("Enter the number to find the last occurrence: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);
	printf("last occurrence of %d = %d",num,fun(a,num,n));
}
