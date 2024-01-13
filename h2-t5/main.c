/*
 * main.c
 *
 *  Created on: Jan 13, 2024
 *      Author: Shehab Aldeen
 */
#include "stdio.h"

int main(){
	char x;
	int ascii;
	printf("Enter a character: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&x);
	ascii=x;
	if((ascii>=65 && ascii<=90)||(ascii>=97 && ascii<=122))
		printf("%c is an alphabet.",x);
	else
		printf("%c is not an alphabet.",x);
	return 0;
}
