/*
 * main.c
 *
 *  Created on: Jul 17, 2023
 *      Author: mok
 */
#include<stdio.h>
int main(void)
{
	int a;
	printf("Enter an integer you want to check:" );
	fflush(stdin); fflush(stdout);
	scanf("%d",&a);
	if(a%2==0)
	{
		printf("%d is even",a);
	}
	else if(a%2==1)
	{
		printf("%d is odd",a);
	}
}

