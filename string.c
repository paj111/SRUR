#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc, char **argv)
{
int i;
  for(i = 0; i < argc; i++)
  {
    printf ("argv[%d] : Uneti string je - %s\n", i, argv[i]);
  }
return 0;
}
