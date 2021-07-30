#include <stdio.h>
int main()
{
	long long c[51][51]={0};
	long long a,i,j;
	scanf("%lld",&a);
	for(i=1;i<=a;i++){
		for(j=1;j<=i;j++){
			if(j==0||i==j)
			 {
			 c[i][j]=1;}
			 else{	
		c[i][j]=c[i-1][j-1]+c[i-1][j];}
			printf("%lld ",c[i][j]);
		}
		printf("\n");
}
return 0;
}

