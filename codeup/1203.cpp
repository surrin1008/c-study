#include <stdio.h>
int main()
{
	int h,m;
	scanf("%d",&h);
	if(h<=20)
	{
	if(h<=10)
	printf("정상");
	else
	printf("과체중"); 
	}
	
	if(h>20)
	printf("비만");
	
}
