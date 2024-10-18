#include<stdio.h>
#include<math.h>
int main(){
  int a,b,c;
  scanf("%d %d %d",&a,&b,&c);
  double a_sqr,b_sqr,c_sqr;
  double a_root,b_root,c_root;
  a_sqr = pow(a,2);
  b_sqr = pow(b,2);
  c_sqr = pow(c,2);
  a_root = sqrt(a);
  b_root = sqrt(b);
  c_root = sqrt(c);

  printf("Square: a = %.2f, b = %.2f, c = %.2f",a_sqr,b_sqr,c_sqr);
  printf("Square root: a = %.2f, b = %.2f, c = %.2f",a_root,b_root,c_root);
  }