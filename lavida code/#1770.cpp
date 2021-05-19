#include <stdio.h>
int main ()
{
	int x,a,b;
	scanf("%d",&x);
	for(int i=1;i<=x;i++)
	{
	scanf("%d:%d",&a,&b);
	printf("%.1f %.1f\n",(float)a * 60 * 0.5 + b * 0.5,(float)b*6.0);
	}
	return 0;
}
