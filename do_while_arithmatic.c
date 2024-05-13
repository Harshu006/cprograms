#include<stdio.h>

int main()
{
	
	int i = 0, j;
	int count = 0;
	
	do{
		j = 2;
		
		do{
			printf("%d ", count++);
			j++;
		}while (j < 5);
		
		printf("\n");
		i++;
	} while (i < 5);
	
	return 0;
}
