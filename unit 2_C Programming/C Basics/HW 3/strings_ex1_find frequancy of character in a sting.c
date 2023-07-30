/*
 * main.c
 *
 *  Created on: Jul 30, 2023
 *      Author: mok
 */

#include<stdio.h>
int main(void)
{
	char a[1000],ch;
	int i,count;
	count=0;
	printf("Enter a string: ");
	fflush(stdin); fflush(stdout);
	gets(a);
	fflush(stdin); fflush(stdout);
	printf("Enter a character to find frequancy: ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&ch);
	for(i=0;a[i]!=0;i++)
	{
		if(a[i]==ch)
		{
			count++;
		}
	}
	printf("frequancy of %c = %d",ch,count);

}
