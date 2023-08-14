/*
 * main.c
 *
 *  Created on: Aug 14, 2023
 *      Author: mok
 */

#include<stdio.h>
#include<string.h>

int reverse(char a[],int n)
{
	char t[100],r[100];
	int i,k;
	for(i=0;i<n;i++)
	{
		t[i]=a[i];
		if(a[i]==' ')
		{
			t[i]=0;
			++i;
			for(k=0;i<n;k++)
			{
				r[k]=a[i];
				i++;
			}
		}
	}
	strcat(r," \0");
	strcat(r,t);
	printf("the reversed name is: %s",r);
	return 0;
}

int main(void)
{
	char a[100];
	printf("Enter the name: ");
	fflush(stdin); fflush(stdout);
	gets(a);
	reverse(a,strlen(a));
}
