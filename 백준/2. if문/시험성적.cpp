#include <stdio.h>
int main ()
{
	int a;
	scanf("%d",&a);
	
	if(90<=a)
	printf("A");
	else if(80<=a)
	printf("B");
	else if(70<=a)
	printf("C");
	else if(60<=a)
	printf("D");
	else if(0<=a)
	printf("F");
	return 0;
}
