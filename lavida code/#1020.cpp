#include <stdio.h>
int main ()
{
	int a,x;
	scanf("%d",&x);
	for(int i=1;i<=x;i++)
	{
		scanf("%d",&a);
		if(a%2==0)
		{
			if(a==2)
			{
			printf("NO\n");	
			}
			else
			{
				printf("%d %d\n",2,a-2);
			}
		}
		else 
		{
			printf("NO\n");
		}
	}
	return 0;

}
