#include <stdio.h>
int main ()
{
	int x;
	scanf("%d",&x);
	for(int i=1;i<=x;i++)
	{
		for(int n=1;n<=i;n++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
