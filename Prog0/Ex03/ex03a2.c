#include <stdio.h>

int main()
{
  int i = 27;
  double x = 31.7;

  printf("単位数は%05dです\n", i);
  printf("単位数は%5dです\n", i);
  printf("単位数は%-5dです\n", i);
  printf("単位数は%+5dです\n", i);
  printf("点数は%.3f点です\n", x);
  printf("点数は%.6le点です\n", x);
  printf("点数は%.3lE点です\n", x);

  return 0;  
}
