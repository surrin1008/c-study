#include <stdio.h>
int main()
{
   int n;
	int x;
   scanf("%d",&n);

   for(int i = 0; i < n - 1; i++)
   {
   	x=64;
       for(int j = 0; j < i; j++)
       {
           printf(" ");
       }
       for(int j = 0; j < 2 * (n - i) - 1; j++)
       {
          if(j<n-i)
        	{
        		x++;
        	printf("%c",x);	
			}
			else
			{
				x--;
			printf("%c",x);
			}
       }
       printf("\n");;
   }

   for(int i = n - 1; i >= 0; i--)
   {
   	x=64;
       for(int j = 0; j < i; j++)
       {
           printf(" ");
       }
       for(int j = 0; j < 2 * (n - i) - 1; j++)
       {
           	if(j<n-i)
        	{
        		x++;
        	printf("%c",x);	
			}
			else
			{
				x--;
			printf("%c",x);
			}
       }
       printf("\n");
   }
}
