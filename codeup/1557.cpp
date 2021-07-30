#include <stdio.h>

int n;




int f(int a){
	int i=1;
	int cnt=0;
	while(i<=a)
	{
		if(n%i==0)
		cnt+=1;
		i++;
	}
	return cnt;
}
int main()
{
  scanf("%d", &n);
  printf("%d\n", f(n));
}

