#include <stdio.h>
int main()
{
	int n,d[1001];
	
	scanf("%d", &n);
	
	for(int i=1;i<=n;i++)
	scanf("%d",&d[i]);
	
	for(int i=1;i<=2;i++)
	{
	for(int i=1;i<=n;i++)
	printf("%d\n",d[i]);
}}

