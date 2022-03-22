#include "main.h"
#include<unistd.h>
/**
 * _putchar - to write the characters c to stdout
 *
 * Return: 1 on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}


