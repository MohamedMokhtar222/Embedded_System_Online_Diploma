/*
 * main.c
 *
 *  Created on: Aug 30, 2023
 *      Author: mok
 */

#include<stdio.h>

int main(void)
{
	int i,n,arr[15];
	int* p=arr;
	printf("Input the number of elements to store in the array (max 15) : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);

	printf("Input %d number of elements in the array :\n",n);
	for(i=0;i<n;i++,p++)
	{
		printf("element - %d : ",i+1);
		fflush(stdin); fflush(stdout);
		scanf("%d",p);
	}
	printf("\nThe elements of array in reverse order are :\n");
	for(i=0;i<n;i++,p--)
	{
		printf("element - %d : %d\n",i+1,*(p-1));
	}
}

