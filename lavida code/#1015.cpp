#include <stdio.h>
int main ()
{
	int x,a,count = 0;
	scanf("%d",&x);
	for(int i=1;i<=x;i++)
	{
	scanf("%d",&a);
	count = 0;
	while (a != 1) 
	{
		if (a % 2 == 0)
		a = a / 2;
		else
		a = 3 * a + 1;
		count++;
	}
		printf("%d\n",count);
	}
	return 0;
}

