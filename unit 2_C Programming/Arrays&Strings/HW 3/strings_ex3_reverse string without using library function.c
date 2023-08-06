/*
 * main.c
 *
 *  Created on: Jul 30, 2023
 *      Author: mok
 */

#include<stdio.h>
#include<string.h>
int main(void)
{
	char a[1000];
	int i,len;

	printf("Enter the string : ");
	fflush(stdin); fflush(stdout);
	gets(a);
	len=strlen(a);
	char b[len];
	for(i=0;i<len;i++)
	{
		b[i]=a[len-i-1];
	}
	b[i]=0;
	printf("reverse string is : %s",b);

}
