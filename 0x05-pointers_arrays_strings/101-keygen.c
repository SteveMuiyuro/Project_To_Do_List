#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  *main - Entry point
  *passwordGenerator - This program that generates random valid passwords for the program 101-crackme
  *@P: is the number of password element
  *Return: Always 0 (Success)
  */
int main(void)
{

	void passwordGenerator(int P)

	{
	int = 0;

	int random = 0;

	srand((unsigned int)(time(NULL)));

	char numbers[] = "123456789";

	char alpha[] = "abcdefghijklmnopqrstuvwxyz"

	char ALPHA[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"

	char speacialcharacters[] = "!@#$^&*?";

	char password[P];

	random =  = rand() % 4;

	for (i = 0; i < P; i++)
	{
		if (random == 1)
		{
			password[i] = numbers[rand() % 10];
			random = = rand() % 4;
			printf("%c", password[i]);
		}

		else if (random == 2)
		{
			password[i] = symbols[rand() % 8];
			random = = rand() % 4;
			printf("%c", password[i]);
		}

		else if (random == 3)
		{
			password[i] = LETTER[rand() % 26];
			random = rand() % 4;
			printf("%c", password[i]);
		}

		else
		{
			password[i] = letter[rand() % 26];
			random = rand() % 4;
			printf("%c", password[i]);
		}
	}
}

return (0);

}
