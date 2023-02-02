#include <stdio.h>
/**
  *main - Entry point
  *Return: Always 0 (Success)
  */
int main(void)
{

	int i;
	unsigned long n1 = 0, n2 = 1, sum, n1_one, n1_two, n2_one, n2_two, one, two;

	for (i = 0; i < 92; i++)
	{
		sum = n1 + n2;
		printf("%lu, ", sum);

		n1 = n2;
		n2 = sum;
	}
	n1_one = n1 / 10000000000;
	n2_one = n2 / 10000000000;
	n1_two = n1 % 10000000000;
	n2_two = n2 % 10000000000;

	for (i = 93; i < 99; i++)
	{
		one = n1_one + n2_one;
		two = n1_two + n2_two;
		if (n1_two + n2_two > 9999999999)
		{
			one += 1;
			two %= 10000000000;
		}

		printf("%lu%lu", one, two);
		if (i != 98)
			printf(", ");

		n1_one = n2_one;
		n1_two = n2_two;
		n2_one = one;
		n2_two = two;
	}
	printf("\n");
	return (0);
}
