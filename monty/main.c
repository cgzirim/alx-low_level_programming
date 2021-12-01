#include "monty.h"

/**
 *
 *
 */
int main(int argc, char **argv)
{
  char *byte_code;
  char **opcodes;
  int idx = 0;
  
  (void)argc;
  (void)argv;

  if (argc != 2)
    {
      fprintf(stderr, "USAGE: monty file");
      exit(EXIT_FAILURE);
    }
  byte_code = read_file(argv[1]);
  printf("bytc: %s\n", byte_code);

  opcodes = parse(byte_code);
  while(opcodes[idx] != NULL)
    {
      printf("%d: %s\n", idx, opcodes[idx]);
      idx++;
    }
  
  /*Free opcodes*/
  free(opcodes);
  return (0);
}
