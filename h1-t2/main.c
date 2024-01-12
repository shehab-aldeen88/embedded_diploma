/*
 * main.c
 *
 *  Created on: Jan 13, 2024
 *      Author: Shehab Aldeen
 */
#include "stdio.h"

int main(){
	int x;
	printf("Enter a integer: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&x);
	printf("\nYou entered: %d",x);
	return 0;
}
