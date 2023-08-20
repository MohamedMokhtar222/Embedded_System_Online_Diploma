/*
 * main.c
 *
 *  Created on: Aug 20, 2023
 *      Author: mok
 */

#include<stdio.h>
struct complex
{
	float m_R;
	float m_I;
}Sum;

struct complex add(struct complex A,struct complex B)
{
	Sum.m_R=A.m_R+B.m_R;
	Sum.m_I=A.m_I+B.m_I;
	return Sum;
}
int main(void)
{
	struct complex X,Y;
	printf("for 1st complex number: \n");
	printf("Enter real and imaginary respectively: ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f",&X.m_R,&X.m_I);

	printf("\nfor 2nd complex number: \n");
	printf("Enter real and imaginary respectively: ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f",&Y.m_R,&Y.m_I);
	add(X,Y);
	printf("Sum=%.1f+%.1fi",Sum.m_R,Sum.m_I);
}
