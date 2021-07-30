#include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%d %d",&a,&b);
	if(b%a==0)
	{
	printf("%d*%d=%d",a,b/a,b);	
	}
	else
	{
	printf("none");
	}
}
