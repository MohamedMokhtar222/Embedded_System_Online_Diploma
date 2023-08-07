/*
 * ain.c
 *
 *  Created on: Aug 7, 2023
 *      Author: mok
 */

#include<stdio.h>
#include<string.h>

int check(char arr[],char us[])
{
	if(strcmp(arr,us)==0)
	{
		printf("username is right");
	}
	else
	{
		printf("username is wrong");
	}
	return 0;
}

int main(void)
{
	char name[100];
	char user[]="USERNAME";
	printf("Enter t`he username: ");
	fflush(stdin); fflush(stdout);
	gets(name);
	check(name,user);
}
