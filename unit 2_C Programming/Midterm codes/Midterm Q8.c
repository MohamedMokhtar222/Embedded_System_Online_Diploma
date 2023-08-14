/*
 * main.c
 *
 *  Created on: Aug 14, 2023
 *      Author: mok
 */

#include<stdio.h>

int reverse(int arr[],int n)
{
	int t[100],i;
	printf("the entered array: ");
	for(i=0;i<n;i++)
			{
			printf("%d ",arr[i]);
			}
	printf("\nthe reversed array: ");
	for(i=0;i<n;i++)
		{
		t[i]=arr[n-i-1];
		printf("%d ",t[i]);
		}
	return 0;
}

int main(void)
{
	int i,a[100],n;
	printf("Enter the number of elements: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);
	printf("Enter the elements of array: \n");
	for(i=0;i<n;i++)
	{
	printf("Enter the element number %d: ",i+1);
	fflush(stdin); fflush(stdout);
	scanf("%d",&a[i]);
	}
	reverse(a,n);
}
