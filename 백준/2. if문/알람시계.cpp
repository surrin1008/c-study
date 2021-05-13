#include <stdio.h>
int main ()
{
	int a,b;
	scanf("%d %d",&a,&b);
	if (a == 0) {
		if (b < 45) {
			a = 23; b = b + 60 - 45;
			printf("%d %d", a, b);
		}
		else if (b >= 45) {
			b = b - 45;
			printf("%d %d", a, b);
		}
	}
	else if (a > 0) {
		if (b < 45) {
			a = a - 1; b = b + 60 - 45;
			printf("%d %d", a, b);
		}
		else if (b >= 45) {
			b = b - 45;
			printf("%d %d", a, b);
		}
	}
	return 0;
}
