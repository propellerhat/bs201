#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void
interesting_func (void)
{
  printf ("Cool stuff...\n");
  exit (EXIT_SUCCESS);
}

void
vuln_copy (char *source)
{
  char buffer[256];
  strcpy (buffer, source);
}

int
main (int argc, char *argv[])
{
  vuln_copy (argv[1]);
  exit (EXIT_SUCCESS);
}


