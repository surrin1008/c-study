#include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%d %d",&a,&b);
	c=1;
	while(c<=b)
	{
		if(a<=c&&b>=c)
		{
			if(c%2==1)
			printf("%d ",c);
			
		}
		c++;
	}
}
