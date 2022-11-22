#include "main.h"

/*
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;


	
	fd = open(filename, O_RDONLY);
	if (fd == -1) 
		return (0);
	
	buf = malloc(sizeof(letters + 1));
	
	if(buf == NULL)
		return(0);
	read(fd, buf, letters);
	buf[letters + 1] = '\0';
	close(fd);

	fd = open(filename, O_WRONLY);
	if(fd == -1)
		return(0);
	write(fd, stdout , letters);
	close(fd);
	

	return (letters);
	
} 
