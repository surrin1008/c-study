#include <stdio.h>
int main ()
{
	int x,y;
	int a,b,c;
	scanf("%d %d",&x,&y);
	a = x*(y/100);
	b = x*((y/10)%10);
	c = x*(y%10);
	printf("%d\n",c);
	printf("%d\n",b);
	printf("%d\n",a);
	printf("%d\n",x*y);
	return 0;
}
