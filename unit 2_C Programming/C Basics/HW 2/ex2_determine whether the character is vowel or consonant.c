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
	printf("Enter an alphabet:");
	fflush(stdin); fflush(stdout);
	scanf("%c",&a);
	if(a=='a'||a=='e'||a=='o'||a=='i'||a=='u')
	{
		printf("%c is a vowel",a);
	}
	else
	{
		printf("%c is a consonant",a);
	}
}
