/*
 * main.c
 *
 *  Created on: Aug 14, 2023
 *      Author: mok
 */

#include<stdio.h>

int flag;

int counter(int x)
{
	if(x==1)
	{
		flag++;
	}
	return flag;
}

int main(void)
{
	int i,y,num;
	printf("Enter the number: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);
	printf("the number in binary: ");
	for(i=31;i>=0;i--)
	{
		y=(num>>i)&1;
		printf("%d",y);
		counter(y);
	}
	printf("\nthe number of ones in %d in binary is %d",num,flag);

}
