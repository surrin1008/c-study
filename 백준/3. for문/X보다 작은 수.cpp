#include <stdio.h>
int main ()
{
	int a,b,c;
	scanf("%d %d",&a,&b);
	for(int i=1;i<=a;i++)
	{
		scanf("%d",&c);
		if(c<b)
		{
			printf("%d ",c);
		}
	}
	return 0;
}
	
