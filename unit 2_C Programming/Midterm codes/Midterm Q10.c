/*
 * main.c
 *
 *  Created on: Aug 14, 2023
 *      Author: mok
 */

#include<stdio.h>
void counter(int a[])
{
	int i,counter1=0,counter2=0,counter3=0;
	for(i=0;i<31;i++)
	{
		if(a[i]==0 && a[i+1]==1)
		{
			i++;
			for(;i<31 && a[i]==1;i++)
			{
				counter1++;
			}
			i--;
			if(counter2==0)
			{
				counter2=counter1;
			}
			else
			{
				counter3=counter1;
			}
			counter1=0;
		}
		if(counter3>counter2)
		{
			counter2=counter3;
		}
	}
	printf("\nthe max number of ones is %d",counter2);
}
int main(void)
{
	int i,y,num,a[100];
	printf("Enter the number: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);
	printf("the number in binary: ");
	for(i=31;i>=0;i--)
	{
		y=(num>>i)&1;
		printf("%d",y);
		a[31-i]=y;
	}
	counter(a);
}
