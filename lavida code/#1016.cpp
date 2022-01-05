#include <stdio.h>
int main () 
{
	int n;
	scanf("%d",&n);
	float a, b = 0.0;
	int count;
	while(n--)
	{
		scanf("%f",&a);
		count = 0;
		for(float i=2;b<a;i++)
		{
			b += 1/i;
			count++; 
		}
		printf("%d\n",count);
	}
	return 0;
}
