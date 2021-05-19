#include <stdio.h>
int main ()
{
	int a,b,x;
	int result = 0;
	scanf("%d",&a);
	for(int i=1;i<=a;i++)
	{
		result = 0;
		scanf("%d",&b);
		for(int n=1;n<=b;n++)
		{
			scanf("%d",&x);
			result += x;
		}
		printf("%d %.f\n",result,((float)result/b));
	}
	return 0;
}
