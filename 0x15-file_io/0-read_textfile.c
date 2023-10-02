#include "main.h"
/**
 *read_textfile - This is the entry point of the code
 *@letters: kdjgfnvdf
 *@filename: oierujngveiur
 *Return:0 Success
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd, r, w;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	r = read(fd, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);
	close(fd);
	return (w);
}
