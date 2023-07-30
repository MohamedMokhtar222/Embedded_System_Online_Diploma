/*
 * main.c
 *
 *  Created on: Jul 29, 2023
 *      Author: mok
 */

#include<stdio.h>
int main(void)
{
	int i,j,r,c;
	int a[10][10];
	int t[10][10];
	printf("Enter rows and columns of matrix: ");
	fflush(stdin); fflush(stdout);
	scanf("%d %d",&i,&j);
	fflush(stdin); fflush(stdout);
	printf("\nEnter elements of matrix\n");
	for(r=0;r<i;r++)
	{
		for(c=0;c<j;c++)
		{
			printf("Enter elements a%d%d: ",r,c);
			fflush(stdin); fflush(stdout);
			scanf("%d",&a[r][c]);
		}
	}
	printf("\nEntered matrix:\n");
	printf("\n");
	for(r=0;r<i;r++)
	{
		for(c=0;c<j;c++)
		{
			printf("%d\t",a[r][c]);
		}
		printf("\r\n");
	}
	for(r=0;r<j;r++)
		{
			for(c=0;c<i;c++)
			{
				t[r][c]=a[c][r];
			}
		}
	printf("\nthe transpose matrix is:\n");
	for(r=0;r<j;r++)
			{
				for(c=0;c<i;c++)
				{
					printf("%d\t",t[r][c]);
				}
				printf("\r\n");
			}
}
