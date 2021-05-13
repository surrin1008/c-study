#include <stdio.h>
int main ()
{
	int num;
	scanf("%d",&num);
	int result;
	int x,y;
	result = num;
	int count =0;
	while(1)
	{
		x= num/10;
		y= num%10;
		num = y*10+((x+y)%10);
	count++	;
	if(num == result)
		{
			break;
		}
	}
	printf("%d",count);
}
