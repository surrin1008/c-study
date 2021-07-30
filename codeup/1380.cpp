#include <stdio.h>
int main()
{
	int a,b,c,d,i;
	scanf("%d",&a);
	for(i=1;i<=6;i++)
	{
	for(b=1;b<=6;b++)
	{
		if(i+b==a)
		printf("%d %d\n",i,b);
	}
	}
}
