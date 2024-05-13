#include<stdio.h>

void live()
{
	
	int var = 10;
	
	int* ptr;
	
	ptr = &var;
	
	printf("Value at ptr = %p \n", ptr);
	printf("Value at var = %d \n", var);
	printf("Value at *ptr = %d \n", *ptr);
}

int main()
{
	live();
	return 0;
}
