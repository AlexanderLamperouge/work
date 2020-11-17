#include <stdio.h>  

int main(void)
{  
    int m[3], i;

    for ( i = 0; i < 3; i++)
    {
    scanf("%1d", &m[i]);
    }
    
    m[0] += m[1] + m[2];

    printf("%d", m[0]);

    return 0;
}