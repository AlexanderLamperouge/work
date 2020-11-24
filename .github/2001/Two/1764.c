#include <stdio.h>
#include <math.h>

int main(void)
{  
    int a, b[100], i;

    scanf("%d", &a);

    for ( i = 0; i < a; i++)
    {
        scanf("%d", &b[i]);
    }
    
    for ( i = 0; i < a; i++)
    {
        b[i] = (pow(2, b[i] - 1));
        printf("%d\n", b[i]);
    }

    return 0;
}