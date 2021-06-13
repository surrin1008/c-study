#include <stdio.h>
int main ()
{
	char a[1025];
	int x;
	scanf("%d",&x);
	while(x--)
	{
		scanf("%s",a);
		for(int i=0;a[i]!='\0';i++)
		{
			if(a[i]=='Z')
			{
				a[i]-=25;
			}
			else 
			{
				a[i]+=1;
			}
		}
		printf("%s\n",a);
	}
	return 0;
}
