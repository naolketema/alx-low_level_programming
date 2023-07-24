#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: the character to be printed
 *
 * Return: 0 (Success), or -1 (failure)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
