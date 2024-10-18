#include <stdio.h>
int main()
{
  int num;
  int b1, b2, b3, b4, b5, b6;
  scanf("%d", &num);

  b1 = num % 2;
  num = num / 2;

  b2 = num % 2;
  num = num / 2;

  b3 = num % 2;
  num = num / 2;

  b4 = num % 2;
  num = num / 2;

  b5 = num % 2;
  num = num / 2;

  b6 = num % 2;
  num = num / 2;

  printf("%d%d%d%d%d", b6, b5, b4, b3, b2, b1);
}