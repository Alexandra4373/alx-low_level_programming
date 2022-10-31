
Search or jump to…
Pulls
Issues
Marketplace
Explore
 
@Ayomidegideon123 
Alexandra4373
/
alx-low_level_programming
Public
Code
Issues
Pull requests
1
Actions
Projects
Security
Insights
alx-low_level_programming/0x15-file_io/1-create_file.c
@Alexandra4373
Alexandra4373 task 1
Latest commit a908999 on May 30
 History
 1 contributor
49 lines (43 sloc)  770 Bytes

#include "main.h"

/**
 * create_file - appends text at the end of a file.
 * @filename: file descripter
 * @text_content: count
 *
 * Return: int
 */

int create_file(const char *filename, char *text_content)
{
	int fd, oz;

	fd = open(filename, O_WRONLY | O_CREAT | O_APPEND | O_TRUNC, 0600);
	if ((filename == NULL) || (fd == -1))
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	oz = write(fd, text_content, _strlen(text_content));
	if (oz == -1)
		return (-1);
	close(fd);
	return (1);
}

/**
 * _strlen - return the length of a a string
 * @s: string to be checked
 *
 * Return: lenght of string
 */

int _strlen(char *s)
{
	int var;
	int output = 0;

	for (var = 0; s[var] != '\0'; var++)
	{
		output += 1;
	}
	return (output);
}
