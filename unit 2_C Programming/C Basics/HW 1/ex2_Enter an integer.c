/*
 * main.c
 *
 *  Created on: Jul 17, 2023
 *      Author: mok
 */
#include <stdio.h>
int main(void)
{
	int a;
	printf("Enter a integer:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&a);
	printf("You entered:%d",a);
}

