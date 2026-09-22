#include "kernel/types.h"
#include "user/user.h"
int
main(int argc, char *argv[])
{
  int i; // iterator
  int x = 0; // output integer
  if(argc != 2)
    exit(1); // exit program if there is not exactly one input value
  for(i=1; i<atoi(argv[1]); i++)
    x++;
  printf("pid(%d): x = %d\n", getpid(), x); // print pid of current process and spin count - 1
  exit(0);
}
