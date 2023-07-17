/*
 * main.c
 *
 *  Created on: Jul 17, 2023
 *      Author: mok
 */
#include <stdio.h>
int main(void)
{
	char a;
	printf("Enter a character:");
	fflush(stdin); fflush(stdout);
	scanf("%c",&a);
	printf("You entered:%d",a);
}


