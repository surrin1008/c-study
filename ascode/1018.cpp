#include <stdio.h>
int main ()
{
	int x,a,b,c;
	scanf("%d",&x);
	a=x/500;
	b=x%500/100;
	c=x%100/10;
	printf("%d\n%d\n%d",a,b,c);
	return 0;
}
