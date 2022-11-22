#include "main.h"

/**
 * read_textfile - a function that reads a text file and prints
 * @filename: the name of the file to be read
 * @lettre: a structure
 *
 **/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t ouvrir, lire, ecrire;
	char *buffer;

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return(0);

	ouvrir = open(filename, O_RDONLY);

	lire = read(ouvrir, buffer, letters);

	ecrire = write(STDOUT_FILENO, buffer, lire);

	if (ouvrir == (-1) || lire == (-1) || ecrire != lire)
	{
		free(buffer);
		return (0);
	}

	close(ouvrir);
	return (lire);
}
