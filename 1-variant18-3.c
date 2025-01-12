#include <stdio.h>
#include <math.h>

int main() {
  int x, a, b, c, x1, y;
  for (x=100; x<1000; x++)
  {
    a=x/100;
    b=(x/10)%10;
    c=x%10;
    x1=10*b+c;
    y=x1+a;
    if (y>99 && y<1000 && y%10!=0)
    {
      printf("x = %d, y = %d\n", x, y);
    }
  }
    return 0;
}
