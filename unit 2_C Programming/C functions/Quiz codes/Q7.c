/*
 * main.c
 *
 *  Created on: Aug 7, 2023
 *      Author: mok
 */

#include<stdio.h>

int num_check(int x)
{
	int f;
	if(x%3==0 && x!=0)
		f=0;
	else
		f=1;
	return f;
}

int main(void)
{
	int num;
	printf("Enter a number: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);
	printf("%d",num_check(num));
}
