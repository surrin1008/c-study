#include <stdio.h>
int main()
{
	int h,m;
	scanf("%d %d",&h,&m);
	if(h==0)
		{ 
	if(m<30){
		h+=24;	
		--h;
		m+=30;
		printf("%d %d",h,m);
	}
	else
	{
	m-=30;
	printf("%d %d",h,m);
	}
	 
	
	}
	else
	if(m<30){
	   
		--h;
		m+=30;
		printf("%d %d",h,m);
	}
	else
	{
	m-=30;
	printf("%d %d",h,m);
	}
	
	
	
}

