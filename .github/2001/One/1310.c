#include <stdio.h>

int main(void)
{
    int i1, i2, x[15], j = 0, k = 0, sum = 0;
    
    scanf("%d", &i1);

    i2 = i1;

    if (i1 >= 0)
    {
        while (i1 != 0)
        {
            x[j] = i1 % 10;

            ++j;
        
            i1 /= 10;
        }
    }
    else
    {
        while (i1 != 0)
        {
            x[j] = -i1 % 10;

//            printf("%d is %d\n", j, x[j]);

            ++j;
        
            i1 /= 10;
        }

    }
    

    for (k = 0; k < j; k++)
    {
        sum = sum * 10 + x[k];
    }

    if (i2 < 0)
    {
        sum *= -1;
    }
    
    printf("%d", sum);

    return 0;
}