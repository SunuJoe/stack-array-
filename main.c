// main.c

#include <stdio.h>
#include "stack.h"

int main(int argc, char* argv[])
{
  Stack tack;
  Init(&tack);

  Push(&tack, 1);
  Push(&tack, 2);
  Push(&tack, 3);
  Push(&tack, 4);
  Push(&tack, 5);

  while(!isEmpty(&tack))
  {
    printf("%d\n", Pop(&tack));
  }

  return 0;
}
