#include <stdio.h>
int main ()
{
	int x,a,b,c;
	scanf("%d",&x);
	for(int i=1;i<=x;i++)
	{
		scanf("%d %d %d",&a,&b,&c);
		if(b*b-4*a*c>0)
		{
			printf("This Equation has two answers\n");
		}
		else if(b*b-4*a*c==0)
		{
			printf("This Equation has only one answer\n");
		}
		else if(b*b-4*a*c<0)
		{
			printf("This Equation has no answer\n");
		}
	}
	return 0;
}
