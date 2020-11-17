#include <stdio.h>  

int main(void)
{  
    int m, n;

    scanf("%d", &m);

    n = m / 100;
    n += m % 10;
    n += (m - m % 10) / 10 % 10;
    
    printf("%d", n);

    return 0;
}