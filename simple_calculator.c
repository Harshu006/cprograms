#include<stdio.h>

struct complex
{
	int realpart, imaginary;
};

main()
{
	struct complex a, b, c;
	
	printf("Enter value of a and b complex number a + ib.\n");
	printf("value of complex number a is = ");
	scanf("%d", &a.realpart);
	printf("value of complex number b is = ");
	scanf("%d", &a.imaginary);
	printf("Enter value of c and d complex number c + id.\n");
	printf("value of complex number c is = ");
	scanf("%d", &b.realpart);
	printf("value of complex number d is = ");
	scanf("%d", &b.imaginary);
	c.realpart = a.realpart + b.realpart;
	c.imaginary = a.imaginary + b.imaginary;
	if (c.imaginary >= 0)
	    printf("complex numbers sum is = %d + %di\n", c.realpart, c.imaginary);
	else
	    printf("complex numbers sum = %d %di\n", c.realpart, c.imaginary);
	    return 0;
}
