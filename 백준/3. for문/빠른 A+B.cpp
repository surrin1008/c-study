#include <stdio.h>
int main ()
{
	int x,a,b;
	scanf("%d",&x);
	for(int i=1;i<=x;i++)
	{
		scanf("%d %d",&a,&b);
		printf("%d\n",a+b);
	}
	return 0;
}
