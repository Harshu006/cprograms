#include<stdio.h>
int main()
{
	int dividend,divisor,quotient,remainder;
	printf("Enter didvidend");
	scanf("%d",&dividend);
	printf("Enter didvisor:");
	scanf("%d", &divisor);
	quotient=dividend/divisor;
	remainder=dividend%divisor;
	printf("quotient=%d\n",quotient);
	printf("remainder=%d",remainder);
	return 0;
}
