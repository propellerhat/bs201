#include <stdio.h>
#include <stdlib.h>

void
vuln_copy (char *source)
{
  char buffer[128];
  strcpy (buffer, source);
  printf ("lol %d %d %d\n", 1, 2, 3);
}

int
main (int argc, char *argv[])
{
  vuln_copy (argv[1]);
  exit (EXIT_SUCCESS);
}


