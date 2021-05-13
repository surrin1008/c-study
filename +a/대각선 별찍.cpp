#include <stdio.h>
int main ()
{
	int a=0;
	
	for(int i=1;i<=5;i++)
	{
		for(int n=1;n<=a;n++)
		{
			printf(" ");
		}
		a++;
		printf("*\n");
	}
	return 0;
}

