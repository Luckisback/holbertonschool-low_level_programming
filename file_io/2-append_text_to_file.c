#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file
 * @filename: the name of the file
 * @text_content: the files content
 * Return: 1 for success, -1 on failure
 **/
int append_text_to_file(const char *filename, char *text_content)
{
	int ecrire;
	int nbr_l;
	int nom;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (nbr_l = 0; text_content[nbr_l]; nbr_l++)
		;
	}
	nom = open(filename, O_WRONLY | O_APPEND);
	ecrire = write(nom, text_content, nbr_l);

	if (ecrire == -1 || nom == -1)
		return (-1);
	close(nom);
	return (1);
}
