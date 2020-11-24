#include <stdio.h>

int main(void)
{
    int m, j, h = 0;
    int k = 0, i = 0, n = 0, g = 0;
    char string[10000000];

    scanf("%d", &m);

    string[m + 1] = '\0';

    scanf("%s", string);
    
    for ( j = 0; j < m; j++)
    {
        if (string[j] == 'k')
        {
            k++;
        }
        else if (string[j] == 'i')
        {
            i++;
        }
        else if (string[j] == 'n')
        {
            n++;
        }
        else if (string[j] == 'g')
        {
            g++;
        }        
    }
    
    while (1)
    {
        if ((k - 1) >= 0 && (i - 2) >= 0 && (n - 2) >= 0 && (g - 2) >= 0)
        {
            h += 2;
            k -= 1;
            i -= 2;
            n -= 2;
            g -= 2;
        }
        else if ((k - 1) >= 0 && (i - 1) >= 0 && (n - 1) >= 0 && (g - 1) >= 0)
        {
            h++;
            k--;
            i--;
            n--;
            g--;
        }
        else
        {
            break;
        }
    }
    printf("%d", h);

    return 0;
}