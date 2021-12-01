#include "monty.h"

/**
 * parse - Parse a string.
 * @file_content: String to be parsed.
 * Return: Pointer to an array of parsed string.
 */
char **parse(char *file_content)
{
  int index = 0;
  char *token;
  char **array;
  char delim[] = " ";

  if (!file_content)
    return (NULL);

  array = malloc(sizeof(file_content));
  if (!array)
    {
      free(file_content);
      fprintf(stderr, "Error: malloc failed");
      exit(EXIT_FAILURE);
    }
  token = strtok(file_content, delim);

  while (token)
    {
      array[index] = token;
      index++;

      /* Realloc if array size exceeds memory*/

      token = strtok(NULL, delim);
    }

  free(file_content);
  return (array);
}
