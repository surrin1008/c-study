#include <stdio.h>
int main ()
{
	char str[32];
	fgets(str, 31, stdin);
	printf("%s",str);
	return 0;
}

