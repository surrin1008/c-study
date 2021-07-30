#include<stdio.h>
 
int main()
{
    int a, b, i, s=0;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
    	scanf("%d",&b);
    	
    	if(b%5==0)
    	{
    		s+=b;
		}
	}
	printf("%d",s);
}


