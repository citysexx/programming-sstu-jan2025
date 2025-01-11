#include <stdio.h>
#include <math.h>

int main () {
  int a,b,c,h1,h2,h3,S,p;
  printf("Enter your a, b, c (a b c) >>> ");
  scanf("%d %d %d", &a, &b, &c);
  p=(a+b+c)/2;
  S=sqrt(p*(p-a)*(p-b)*(p-c));
  h1=(2*S)/a;
  h2=(2*S)/b;
  h3=(2*S)/c;
  printf("Answer >>> h1: %d   h2: %d   h3: %d\n",h1, h2, h3);
  return 0;
}
