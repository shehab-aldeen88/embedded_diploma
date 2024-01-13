/*
 * main.c
 *
 *  Created on: Jan 13, 2024
 *      Author: Shehab Aldeen
 */
#include "stdio.h"

int main(){
	int x,y;
	printf("Enter an integer you want to check: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&x);
	y=x&1;
	if (y==1)
		printf("%d is odd.",x);
	else
		printf("%d is even.",x);
	return 0;
}

