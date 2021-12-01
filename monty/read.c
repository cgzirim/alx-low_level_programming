#include "monty.h"

/**
 * read_file - Read the content in a file into a buffer.
 * @filename: Name of file to be read.
 * Return: On function's success - buffer.
 */
char *read_file(char *filename)
{
  int fd;
  FILE *fp;
  char *buffer;
  long int file_size;

  /* Open the file*/
  fd = open(filename, O_RDONLY);
  fp = fopen(filename, "r");
  /* Checking if file exists or not*/
  if (fp == NULL || fd < 0)
    {
      fprintf(stderr, "Error: Can't open file %s", filename);
      exit(EXIT_FAILURE);
    }

  /* Getting size of file*/
  fseek(fp, 0L, SEEK_END);
  file_size = ftell(fp);
  fclose(fp);

  /* Assigning a menory block to buffer*/
  buffer = malloc(file_size);
  if (!buffer)
    {
      fprintf(stderr, "Error: malloc failed");
      exit(EXIT_FAILURE);
    }

  /* Read file content into the buffer*/
  read(fd, buffer, file_size);
  /*printf("fn size: %ld", file_size);
  printf("%s\n", buffer);*/

  /*Close the file*/
  close(fd);

  return(buffer);
}
