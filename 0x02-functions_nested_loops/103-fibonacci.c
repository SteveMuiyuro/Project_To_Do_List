#include <stdio.h>
/**
  *main - Entry point
  *Return: Always 0 (Success)
  */
int main(void)
{
	unsigned long n1 = 0;
	unsigned long n2 = 1;
	unsigned long sum;
	int  even_sum;

	while (1)
	{
		sum = n1 + n2;
		if (sum > 4000000)
			break;

		if (sum % 2 == 0)
			even_sum += sum;

		n1 = n2;
		n2 = sum;

	}

	printf("%d\n", even_sum);

	return (0);

}

