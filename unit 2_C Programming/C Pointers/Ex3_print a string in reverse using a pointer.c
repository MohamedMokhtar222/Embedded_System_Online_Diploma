/*
 * main.c
 *
 *  Created on: Aug 30, 2023
 *      Author: mok
 */

#include<stdio.h>
#include<string.h>

int main(void)
{
	int i;
	char str[100],rev[100];
	char* p=str;
	char* revp=rev;
	printf("Input a string : ");
	fflush(stdin); fflush(stdout);
	gets(str);

	*(revp+strlen(str))=0;
	for(i=0;i<strlen(str);i++)
	{
		*(revp+i)=*(p+strlen(str)-i-1);

	}
	printf("Reverse of the string is : %s",rev);
}
