#include <stdio.h>

int square(int);
double recipro(int);

int main() {
  int m, n = 7;
  double res;

  m = square(n);
  res = recipro(m);

  printf("n:%d  2乗値:%d  逆数:%f\n", n, m, res);
  return 0;
}

int square(int x) {
  return x*x;
}

double recipro(int x) {
  return 1/(double)x;
}
