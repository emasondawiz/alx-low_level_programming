#ifndef EMASON
#define EMASON
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

ssize_t read_textfile(const char *filename, size_t letters);
int _putchar(char *c);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int count_str(char *str);
char *create_buffer(char *file);
void _closefile(int fd);
#endif
