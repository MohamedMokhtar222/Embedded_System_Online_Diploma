/*
 * main.c
 *
 *  Created on: Jul 17, 2023
 *      Author: mok
 */
#include <stdio.h>
int main(void)
{
	float a,b,Product;
	printf("Enter two integers:");
	fflush(stdin); fflush(stdout);
	scanf("%f %f",&a, &b);
	Product=a*b;
	printf("product:%f\r\n",Product);
}



