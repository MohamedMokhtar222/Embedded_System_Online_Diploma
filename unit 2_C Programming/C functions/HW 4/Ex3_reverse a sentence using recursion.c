/*
 * main.c
 *
 *  Created on: Aug 6, 2023
 *      Author: mok
 */

#include<stdio.h>
#include<string.h>
int reverse(char a[],int n)
{
	static int i=0;
	char Reversed[100];
	if(i<=n)
	{
		Reversed[i]=a[n-i];
		printf("%c",Reversed[i]);
		i++;
		reverse(a,n);
	}
	return 0;
}

int main()
{
    char sentence[100];
	printf("Enter a sentence: ");
	fflush(stdin); fflush(stdout);
	gets(sentence);
	reverse(sentence,strlen(sentence));
}
