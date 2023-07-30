/*
 * main.c
 *
 *  Created on: Jul 29, 2023
 *      Author: mok
 */

#include<stdio.h>
int main(void)
{
	int n,i;
	printf("Enter the numbers of data: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);
	float a[100],sum,avg;
	sum=0;
	while (n>100 || n<=0)
	{
		printf("Error! number should be in range of (1 to 100)\n");
		printf("Enter the number again: ");
		fflush(stdin); fflush(stdout);
		scanf("%d",&n);
	}
	for(i=0;i<n;i++)
	{
		printf("%d.Enter number: ",i+1);
		fflush(stdin); fflush(stdout);
		scanf("%f",&a[i]);
		sum+=a[i];
	}
	avg=sum/n;
	printf("average = %.2f",avg);
}

