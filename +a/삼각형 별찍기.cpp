#include <stdio.h>
int main ()
{
	int a=1;
	int b=1;
	
	for(int i=1;i<=5;i++)
	{
		for(int j=2;j<=b;j++)
		{
			printf(" ");
		}
		b++;
		for(int n=5;n>=a;n--)
		{
			printf("*");
		}
		a++;
		printf("\n");
	}
	return 0;
}
