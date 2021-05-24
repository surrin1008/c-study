#include <stdio.h>
int main ()
{
	int x,a;
	scanf("%d",&x);
	for(int i=1;i<=x;i++)
	{
	scanf("%d",&a);
		if(a<=2)
		{
			printf("-1\n");
		}
		else
		{
			printf("%d\n",a-2);
		}
	}
	return 0;
}

