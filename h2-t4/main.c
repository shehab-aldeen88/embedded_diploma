/*
 * main.c
 *
 *  Created on: Jan 13, 2024
 *      Author: Shehab Aldeen
 */
#include "stdio.h"

int main (){
	float x;
	printf("Enter a number: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&x);
	if(x>0)
		printf("%f is positive.",x);
	else if(x<0)
		printf("%f is negative.",x);
	else
		printf("You entered zero.");
	return 0;
}


