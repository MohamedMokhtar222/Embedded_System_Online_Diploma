/*
 * main.c
 *
 *  Created on: Aug 13, 2023
 *      Author: mok
 */

#include<stdio.h>

float square_root(int x)
{
	float sqrt,t=0.001;
	sqrt=x;
	while(sqrt*sqrt-x>t)
	{
		sqrt=(sqrt+(x/sqrt))/2;
	}
	return sqrt;
}

int main(void)
{
	int num;
	printf("Enter the numbers:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);
	printf("the square root is %.3f",square_root(num));
}
