#include <stdio.h>
int main ()
{
	double a,b;
	scanf("%lf %lf",&a,&b);
	printf("%.6lf, %.6lf, %.6lf",a,b,(a*b)/2);
	return 0;	
}
