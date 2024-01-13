/*
 * main.c
 *
 *  Created on: Jan 13, 2024
 *      Author: Shehab Aldeen
 */
#include "stdio.h"

int main(){
	int x,y,i;
	printf("Enter an integer: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&x);
	for(i=1,y=0;i<=x;i++)
		y+=i;
	printf("Sum = %d",y);
	return 0;
}


