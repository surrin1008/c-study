#include <stdio.h>
int main()
{
	int a,b,c=0,g;
	scanf("%d",&a);
	g=1;
	while(a>=g)
	{
		scanf("%d",&b);
		if(b%2==0)
		c++;
		g++;
	}
	printf("%d",c);
}
