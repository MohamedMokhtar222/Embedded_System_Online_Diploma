/*
 * main.c
 *
 *  Created on: Jul 17, 2023
 *      Author: mok
 */
#include <stdio.h>
int main(void)
{
	int a,b,sum;
	printf("Enter two integers:");
	fflush(stdin); fflush(stdout);
	scanf("%d %d",&a, &b);
	sum=a+b;
	printf("sum:%d\r\n",sum);
}
