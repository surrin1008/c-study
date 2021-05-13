#include <stdio.h>
int main ()
{
	int a,b,x;
	scanf("%d",&x);
	
	for(int i=0;i<x;i++)
	{
		scanf("%d %d",&a,&b);
		printf("%d\n",a+b);
	}
	return 0;
}
