/*
 * main.c
 *
 *  Created on: Jul 17, 2023
 *      Author: mok
 */
#include<stdio.h>
int main(void)
{
	char a;
	printf("Enter a character: ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&a);
	if((a>='a' && a<='z')||(a>='A' && a<='Z'))
	{
		printf("%c is an alphabet",a);
	}
	else
	{
		printf("%c is not an alphabet",a);
	}
}

