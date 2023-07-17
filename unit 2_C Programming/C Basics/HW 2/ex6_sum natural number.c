/*
 * main.c
 *
 *  Created on: Jul 17, 2023
 *      Author: mok
 */
#include<stdio.h>
int main(void)
{
	int a,i,sum;
	sum=0;
	printf("Enter an integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		sum=sum+i;
	}
	printf("sum=%d",sum);
}

