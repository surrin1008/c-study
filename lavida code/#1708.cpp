#include <stdio.h>
int main ()
{
	int a,b,c,d;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	printf("%.2f",(float)(a-b)*c/d);
	return 0;
}
