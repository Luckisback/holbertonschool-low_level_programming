#include "main.h"

/**
 * _pow_recursion - A function that return a value of x
 * @x: first number to be raised to the power y
 * @y: the number use for the power
 * Return: the result
 **/

int _pow_recursion(int x, int y)
{
        if (y < 0)
                return (-1);
        else if (y == 0)
                return (1);
        else
                return (x * _pow_recursion(x, (y - 1)));
}

/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 * @b: argument that brings the binary to be convert
 * Return: the result obtained after convertion
 **/

unsigned int binary_to_uint(const char *b)
{
	char *my_bin = *b;
	int L_bin = 0, pos_bit = 0, poids = 0;
	int i, x;
	unsigned int result = 0;

	/*allouons de la l'espace memoire */

	if (*b == '\0')
		free(my_bin);
	return (0);

	while (b[L_bin])
	{
		L_bin++;
	}
	my_bin = malloc(sizeof(char) * L_bin);

	for(i = 0; i <= L_bin; i++)
		my_bin[i] = b[i];

	/*Calcul de la position et du poids binaire*/
	x = 0;
	for (i = L_bin; i >= 1; i--)
	{
		pos_bit = L_bin - (L_bin - x);
		x++;
	/* le poids binaire pour les bits en 1*/
		if (my_bin[i] != 1 || my_bin[i] != '0')
			return (0);
		else
			poids = _pow_recursion(2, pos_bit);
		result = result + poids;
	}
	return (result);
}
