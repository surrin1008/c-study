#include <stdio.h>

int n, m;

long long int f(int a, int b)
{
	long long int c=0;
	c=(long long)a+b;
	return c;
}
int main()
{
  scanf("%d%d", &n, &m);
  printf("%lld\n", f(n, m));
}

