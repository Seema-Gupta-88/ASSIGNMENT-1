//Write a C program that converts kilometers per hour to miles per hour.
#include<stdio.h>
int main(){
	
	float kmph;
	float mph;
	printf("Enter kmph:");
	scanf("%f",&kmph);
	
	 mph=kmph * 0.621371;
	printf("Speed in miles per hour: %f\n",mph);
	
	return 0;
}
