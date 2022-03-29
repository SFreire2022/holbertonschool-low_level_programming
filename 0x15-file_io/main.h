#ifndef _MAIN_H_
#define _MAIN_H_

#include <stddef.h> /* NULL pointer constat definitions */
#include <unistd.h> /* To use write and read functions */
#include <fcntl.h> /* POSIX constant definitions */

#define BUFSIZE 1024 /* define buffer size to 1KB */

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif
