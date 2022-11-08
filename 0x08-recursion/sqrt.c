#include <stdio.h>

int root( int n)
{
    double i = 0;
    while (i < n)
    {
      if (i == (n / i))
      {
        return (i);
      }
      i++;
    }
    	return (0);
}
int main() {
	int a = 8;
	int b = 3;
  /*  printf("%d\n", root(30));*/
	printf("%d\n", a % b);
  return 0;
}
