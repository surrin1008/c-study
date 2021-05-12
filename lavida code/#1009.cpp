#include <stdio.h>
int main ()
{
    int test, a, b, c, d, root1, root2;

    scanf("%d", &test);

    while(test--){

        scanf("%d %d %d %d", &a, &b, &c, &d);
        root1 = a*c - b*d;
        root2 = a*d + b*c;
        printf("%d %d\n", root1, root2);

    }
    return 0;	
}
