#include<stdio.h>

int power(int base, int pow){
	if(pow==0){
		return 1;
	}
	else{
		return base*power(base, pow-1);
	}
}

int main(){
	int base, pow;
	printf("Enter the base number and power:\n");
	scanf("%d %d", &base, &pow);
	printf("Result of %d^%d is::  %d", base, pow, power(base, pow));
	return 0;
}
