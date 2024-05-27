//Write a C program that calculates the volume of sphere.
#include<stdio.h>
int main(){
	
	float radius,volume;
	float pie=3.141592;
	printf("Enter the radius of the sphere:");
	scanf("%f",&radius);
	volume=(4.0/3.0)*pie*radius*radius*radius;
	
	printf("The volume of the sphere %f is:%f\n",radius,volume);
	
	return 0;
}

