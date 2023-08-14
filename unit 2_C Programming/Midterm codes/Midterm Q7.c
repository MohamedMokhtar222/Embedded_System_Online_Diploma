/*
 * main.c
 *
 *  Created on: Aug 14, 2023
 *      Author: mok
 */

#include <stdio.h>

int fun()
{
	static int counter=0;
	static int sum=0;
	if (counter<100)
	{
		counter++;
		sum+=counter;
		fun();
	}
	return sum;
}

int main(void)
{
	printf("the sum of numbers from 1 to 100 is %d",fun());
}
