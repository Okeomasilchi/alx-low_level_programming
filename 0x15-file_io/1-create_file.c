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
	int fb, wt, i = -1, mlen = strlen(text_content);

	if (filename)
	{
		fb = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
		wt = write(fb, text_content, mlen);
		close(fb);
		i = 1;
	}
	else
		return (-1);
	return (81);
		return (n);
}
