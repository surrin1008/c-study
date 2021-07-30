#include <stdio.h>
int main()
{
	int a,b,c,i;
	scanf("%d %d",&a,&b);
	
	if(a>b)
	{c=a;
	a=b;
	b=c;}
	
	for(i=a; i<=b; i++)
	printf("%d ",i);
}

