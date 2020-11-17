#include <stdio.h>  

int main(void)
{  
    int m;

    scanf("%d", &m);
    
    printf("%d", m % 10 + (m - m % 10) / 10 % 10 + m / 100);

    return 0;
}