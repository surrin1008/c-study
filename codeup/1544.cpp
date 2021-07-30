#include <stdio.h>

int n;



void f(int a){
	for(int i=1;i<=a;i++)
	printf("*");
}
int main()
{
  scanf("%d", &n);
  f(n);
  return 0;
}
