/*
 * main.c
 *
 *  Created on: Aug 14, 2023
 *      Author: mok
 */

#include<stdio.h>

int uni(int a[],int n)
{
	int i=0,k=0;
	for(;i<n;k++)
	{
		if(k==i)
			continue;
		if(k==n)
		{
			break;
		}
		if(a[i]!=a[k])
		{
			continue;
		}
		else
		{
			i++;
			k=0;
		}
	}

	return a[i];
}

int main(void)
{
	int k,a[100],n;
	printf("Enter the number of elements: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);
	printf("Enter the elements of array: \n");
	for(k=0;k<n;k++)
	{
		printf("Enter the element number %d: ",k+1);
		fflush(stdin); fflush(stdout);
		scanf("%d",&a[k]);
	}
	printf("the unique number is %d",uni(a,n));

}
