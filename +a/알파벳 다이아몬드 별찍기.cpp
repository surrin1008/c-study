#include <stdio.h>
int main ()
{
	int x;
	scanf("%d",&x);
	int y=x-1;
	int a=0;
	int z=1;
	int a1=65;
	for(int i=1;i<=x;i++)
	{
		for(int n=1;n<=y;n++)
		{
			printf(" ");
		}
		y--;
		for(int j=1;j<=z;j++)
		{
			printf("%c",a1);
		}
		z+=2;
		a1++;
		printf("\n");
	}
	z-=4;
	a1-=2;
	for(int i2 = 1;i2<=x;i2++)
	{
		for(int n3 = 0;n3<=a;n3++)
		{
			printf(" ");
		}
		a++;
		for(int n4=1;n4<=z;n4++)
		{
			printf("%c",a1);
		}
		a1--;
		z-=2;
		printf("\n");
	}
	
	return 0;
}

