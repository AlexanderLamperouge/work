#include <stdio.h>

int main(void)
{
    float n, m, k;

    scanf("%f %f %f", &n, &m, &k);

    n -= m;

    if (n / k <= 0)
    {
        printf("UnHappy!");
    }
    
    else
    {
        if (n / k != (int) (n / k))
        {
            printf("UnHappy!");
        }
        else
        {
            printf("Happy!");
        }
    }    

    return 0;
}