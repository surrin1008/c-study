#include <stdio.h>

int n;




long long int f(int a){
	long long s=0;
	for(int i=1;i<=a;i++)
	s+=i;
	
	return s;
}
int main()
{
  scanf("%d", &n);
  printf("%lld\n", f(n));
}
