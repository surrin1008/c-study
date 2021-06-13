#include <stdio.h>
int main ()
{
	int TC;
	unsigned int a;
	int day=0, hour=0, min=0, sec=0;
	scanf("%d",&TC);
	while(TC--)
	{
		scanf("%d",&a);
		sec=a%60;
		min=a/60%60;
		hour=a/60/60%24;
		day=a/60/60/24;
	
	printf("%d day : %d hour : %d min : %d sec\n", day,hour,min,sec);	
	}	
	return 0;
}
