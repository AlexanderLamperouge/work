#include <stdio.h>

int main(void)
{
    int n[100], m[100], x = 0, y = 0, z = 0;
    int c, i;

    scanf("%d", &c);

    for ( i = 0; i < 10; i++)
    {
        n[i] = 0;
        m[i] = 0;
    }
    

    for ( i = 0; i < c; i++)
    {
        scanf("%d", &n[i]);

        x = n[i] / 2;
        y = ((n[i] - x) * (2.0 / 3.0));
        z = n[i] - x - y;

        m[i] = x / 10;
        if (x % 10 != 0)
        {
            m[i]++;
        }

        m[i] += y / 10;
        if (y % 10 != 0)
        {
            m[i]++;
        }

        
        m[i] += z / 10.0;
        if (z % 10 != 0)
        {
            m[i]++;
        }
        

    }

    for ( i = 0; i < c; i++)
    {
        printf("%d\n", m[i]);
    }
        
    
    return 0;    

}