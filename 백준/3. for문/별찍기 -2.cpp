#include <stdio.h>
int main ()
{
	int a,b;
	int s;
	scanf("%d",&a);
	for(int num=1;num<=a;num++)
	{
		for(b=a;b>num;b--)
		{
			printf(" ");
		}
		for(s=a-num+1;s<=a;s++)
		{
			printf("*");
		}
		printf("\n");
	}
}
	
