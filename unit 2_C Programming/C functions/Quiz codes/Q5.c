/*
 * main.c
 *
 *  Created on: Aug 7, 2023
 *      Author: mok
 */

#include<stdio.h>

int clear(int num,int n)
{
	num&=~(1<<n);
	return num;
}

int main(void)
{
	int num,n;
	printf("Enter the number: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);
	printf("Enter the number of bit: ");
	fflush(stdin); fflush(stdout);
		scanf("%d",&n);
		printf("the number after clearing: %d",clear(num,n));
}
