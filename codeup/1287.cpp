#include <stdio.h>
 int dan, i;
void putstar(int k)
{
    for(int i = 1; i <= k; i++)
        printf("*");
}
 
int main()
{

    scanf("%d", &dan);

    for(i = 1; i <= 9; i++)
    {
        putstar(dan*i);
        printf("\n");
    }

    return 0;
}

