#include <stdio.h>

int main(void)
{
    int n;
    int i, j;
    char y = 'A';

    while (scanf("%d", &n) != EOF)
    {
        for ( j = 0; j < n; j++)
        {
            for ( i = 0; i < n; i++)
            {
                printf("%c", y);
                
                if (i == (n - 1))
                {
                    printf("\n");
                }
            }
            y ++;
        }
        
        y = 'A';
    }
}