#include<stdio.h>
#include"main.h"
/**
 * main - check the code
 * 
 */

int main(void)
{
	int n;

	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
	return (0);
}

