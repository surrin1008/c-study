#include<stdio.h>
 int main()
 {
     int a,b,c;
     scanf("%d %d", &a, &b);
     c=0;
     for(a;a<=b;a++)
     {
         if(a%3==0)
             c+=a;
	 }
      printf("%d", c);
 }
