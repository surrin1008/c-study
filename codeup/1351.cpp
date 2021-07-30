#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	
	for(int c=a;c<=b;c++)
	{
		for(int j=1;j<=9;j++)
		{
			printf("%d*%d=%d\n",c,j,c*j);
		}
	}
}
