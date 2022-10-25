#include <stdio.h>

/**
 * main - prints the name of the file it was compiled from
 * __FILE__: macro in C that is used to get the full path
 * Return: O for success
 **/
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
