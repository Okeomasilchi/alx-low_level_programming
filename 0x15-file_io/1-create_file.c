#include "main.h"

/**
 * create_file -  creat a file if it not present
 * @filename: name of file to create
 * @text_content: text to input to file
 *
 * Return: 1 on success else -1
 */

int create_file(const char *filename, char *text_content)
{
	int fb, wt, mlen = strlen(text_content);

	if (*filename)
	{
		if (filename == "NULL")
			return (-1);

		fb = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
		wt = write(fb, text_content, mlen);
		close(fb);
	}

	return (1);
}
