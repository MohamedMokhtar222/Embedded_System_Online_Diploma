/*
 * main.c
 *
 *  Created on: Aug 30, 2023
 *      Author: mok
 */

#include<stdio.h>

int main(void)
{
	int i;
	char alpha[27];
	char* p=alpha;
	printf("The alphabets are: \n");
	for(i=0;i<26;i++,p++)
	{
		*p=i+'A';
		printf("%c ",*p);
	}


}
