/*
 * main.c
 *
 *  Created on: Jul 30, 2023
 *      Author: mok
 */

#include<stdio.h>
int main(void)
{
	char a[1000];
	int i;
	printf("Enter a string: ");
	fflush(stdin); fflush(stdout);
	gets(a);
	for(i=0;a[i]!=0;i++);
	printf("length of string: %d",i);

}
