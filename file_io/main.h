#ifndef MAIN_HEADER_FILE
#define MAIN_HEADER_FILE

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int file_init(char *file_back, char *file_go, int *fd_back, int *fd_go);
int error_copy(int fd_from, int fd_to);
int error_close(int fd_from, int fd_to);


#endif
