#include <stdlib.h>
#include <stdio.h>

int
func (int arg1, int arg2, int arg3, int arg4)
{
  printf("%d\n", arg1 + arg2 + arg3 + arg4);
  return 42;
}

int
five_arg_func (int arg1, int arg2, int arg3, int arg4, int arg5)
{
  printf ("%d\n", arg1 + arg2 + arg3 + arg4 + arg5);
  return 41;
}

int
main (int argc, char *argv[])
{
  int retval = func (1, 2, 3, 4);
  retval = five_arg_func (1, 2, 3, 4, 5);

  exit (EXIT_SUCCESS);
}
