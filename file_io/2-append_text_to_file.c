#include "main.h"
#include <fcntl.h>
#include <unistd.h>
/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: Name of the file
 * @text_content: Text to append to the file (NULL terminated string)
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0;

	/*Check if filename is NULL*/
	if (filename == NULL)
		return (-1);

	/*Open the file with write-only, append mode*/
	fd = open(filename, O_WRONLY | O_APPEND);
	/*Check if the file was opened successfully*/
	if (fd == -1)
		return (-1);

	/*If text_content is not NULL, calculate its length*/
	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;

		/*Write the content to the file*/
		if (write(fd, text_content, len) == -1)
		{
			/*If fails, close the file and return -1*/
			close(fd);
			return (-1);
		}
	}
	/*Close the file and return 1 to indicate success*/
	close(fd);
	return (1);
}
