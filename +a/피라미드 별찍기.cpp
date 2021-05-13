#include <stdio.h>
int main ()
{
	int x;
	scanf("%d",&x);
	int y=x;
	int z=1;
	for(int i=1;i<=x;i++)
	{
		for(int n=1;n<=y;n++)
		{
			printf(" ");
		}
		y--;
		for(int j=1;j<=z;j++)
		{
			printf("*");
		}
		z+=2;
		printf("\n");
	}
	
	return 0;
}

