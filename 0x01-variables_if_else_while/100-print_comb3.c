#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all possible different
 *           combinations of two digits.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int a;
	int b;

	/*print the first digit of the combination*/
	for (a = 0; a < 10; a++)
	{
		/*print the second digit of the combination*/
		for (b = 0; b < 10; b++)
		{
			/**
			 * don't print same two digits
			 * and make sure first digit is
			 * less than second digit
			*/
			if (a != b && a < b)
			{
				putchar(a + '0');
				putchar(b + '0');

				if (a + b != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}


	putchar('\n');

	return (0);
}
