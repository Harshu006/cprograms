#include<stdio.h>

#define pi 3.141592
int main()
{
	float radius;
	printf("Enter Radius of Circle:\n");
	scanf("%f",&radius);
	
	float area=pi*radius*radius;
	
	printf("The area of Circle with radius %0.2f is: %0.2f",radius,area);
	return 0;
}
