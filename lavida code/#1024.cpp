#include <stdio.h>
#include <string.h>
int main()
{
	int a;
	int b,c;
	char x[52];
	scanf("%d",&a);
	while(a--)
	{
		scanf("%d %d",&b,&c);
		scanf("%s",x);
		
		for(int i=0;i< strlen(x);i++)
		{
			switch (x[i])
			{
			case 'L':
            b--;
            break;

        	case 'R':
            b++;
            break;

   	    	case 'U':
            c++;
            break;

     	    case 'D':
            c--;
            break;
			}
		}
		printf("%d %d\n",b,c);
	}
	return 0;
}
