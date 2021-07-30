#include <stdio.h>
int main ()
{
	int a;
	int max= -1000000 ,min= 1000000; 
	scanf("%d",&a);
	int arr[a]={0};
	for(int i=0;i<a;i++)
	{
		scanf("%d ",arr[i]);
		if(max <arr[i])
			max= arr[i];
		if(min >arr[i])
			min= arr[i];
	}
	printf("%d %d",min,max);
	return 0;
}
