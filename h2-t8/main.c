/*
 * main.c
 *
 *  Created on: Jan 13, 2024
 *      Author: Shehab Aldeen
 */
#include "stdio.h"

int main(){
	char op;
	float x,y;
	printf("Enter operator either + or - or * or /: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&op);
	printf("Enter two operands: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f\n%f",&x,&y);
	switch(op){
	case '+':
		printf("%f %c %f = %f",x,op,y,x+y);
		break;
	case '-':
		printf("%f %c %f = %f",x,op,y,x-y);
		break;
	case '*':
		printf("%f %c %f = %f",x,op,y,x*y);
		break;
	case '/':
		if (y==0)
			printf("cannot divide by zero.");
		else
			printf("%f %c %f = %f",x,op,y,x/y);
		break;
	default:
		printf("wrong operator.");
	}

}
