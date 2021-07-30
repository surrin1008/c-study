#include <stdio.h>
int main()
{
	int a,b,c=0,g;
	scanf("%d",&a);
	g=1;
	while(a>=g)
	{
		c+=g;
		g++;
	}
	printf("%d",c);
}
