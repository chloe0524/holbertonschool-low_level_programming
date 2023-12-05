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
int close_andprint(int fd);
int writing_oops(int fd1, int fd_go, char *filename);
int reading_oops(int fd1, int fd_go, char *filename);
int error_close(int fd_back, int fd_go);

#endif
