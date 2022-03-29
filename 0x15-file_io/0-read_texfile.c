#include "main.h"
/**
  * read_textfile - Reads a text file and prints it to the POSIX stdout
  * @filename: Poiter to the file to read
  * @letters: Number of characters to read and print
  * Return: 0 on error or the number of characters printed if ok
  **/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int txt_file, total = 0, read_status = 1;
	char buffer[BUFSIZE]; /* define 1KB buffer */

	if (filename == NULL)
		return (0);
	/* open and set val to txt_file for opened file with read only access mode */
	txt_file = open(filename, O_RDONLY);
	if (txt_file == -1) /* if error openning return 0 */
		return (0);
	/* If letters arg is bigger than buffer, perform a loop reading the total */
	/* buffer and writing it til EOF or letters arg size */
	while (letters > BUFSIZE && read_status != 0)
	{
		read_status = read(txt_file, buffer, BUFSIZE);
		write(STDOUT_FILENO, buffer, read_status);
		total += read_status;
		letters -= BUFSIZE;
	}
	read_status = read(txt_file, buffer, letters);
	write(STDOUT_FILENO, buffer, read_status);
	total += read_status;
	close(txt_file); /* Close the file*/
	return (total);
}
