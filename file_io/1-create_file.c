#include "main.h"

/**
 * create_file - a function that creates a file.
 * @filename: files name
 * @text_content: the content of the file
 * Return: 1 for success, -1 on failure
 **/
int create_file(const char *filename, char *text_content)
{
	int ecrire;
	int text_c;
	int nom;

	if (filename == NULL)
		return (-1);
	nom = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (nom == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	for (text_c = 0; text_content[text_c]; text_c++)
		;

	ecrire = write(nom, text_content, text_c);
	if (ecrire == -1)
		return (-1);

	close(nom);
	return (1);
}
