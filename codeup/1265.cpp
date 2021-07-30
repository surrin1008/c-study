#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d",&a);
	b=1;
	while(b<=9)
	{
	
		printf("%d*%d=%d\n",a,b,a*b);
		b++;
	}
}
