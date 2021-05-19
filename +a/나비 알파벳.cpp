#include <stdio.h>
int main()
{
   int n;
	int x;
   scanf("%d",&n);

   for(int i = 1; i <= n; i++)
   {
   	x=64;
       for(int j = 1; j <= i; j++)
       {
           
        		x++;
        		printf("%c",x);
   
       }
       for(int j = 1; j <= 2 * (n - i); j++)
       {
           printf(" ");
       }
       for(int j = 1; j <= i; j++)
       {
            
				
				printf("%c",x);
				x--;
			
       }
       printf("\n");
   }

   for(int i = n - 1; i >= 1; i--)
   {
   	x=64;
       for(int j = 1; j <= i; j++)
       {
          
        	
        		x++;
        		printf("%c",x);
        		
			
       }
       for(int j = 1; j <= 2 * (n - i); j++)
       {
            printf(" ");
       }
       for(int j = 1; j <= i; j++)
       {
            
				
				printf("%c",x);
				x--;
			
       }
       printf("\n");
   }
}
