/*
 * main.c
 *
 *  Created on: Jul 29, 2023
 *      Author: mok
 */

#include<stdio.h>
int main(void)
{
	float a[2][2],b[2][2],sum[2][2];
	int r,c;
	printf("Enter the elements of 1st matrix\n");
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			printf("Enter a%d%d: ",r+1,c+1);
			fflush(stdin); fflush(stdout);
			scanf("%f",&a[r][c]);
		}
	}
	printf("Enter the elements of 2st matrix\n");
		for(r=0;r<2;r++)
		{
			for(c=0;c<2;c++)
			{
				printf("Enter b%d%d: ",r+1,c+1);
				fflush(stdin); fflush(stdout);
				scanf("%f",&b[r][c]);
			}
		}
		printf("\nsum of matrix:\n");
		for(r=0;r<2;r++)
				{
					for(c=0;c<2;c++)
					{
						sum[r][c]=a[r][c]+b[r][c];
						printf("%.1f\t",sum[r][c]);
					}
					printf("\n");
				}
}

