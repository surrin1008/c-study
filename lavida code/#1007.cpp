#include <stdio.h>
int main ()
{
	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	printf("%.2f",(float)b/((float)(100+a)/100));
	return 0;
}
