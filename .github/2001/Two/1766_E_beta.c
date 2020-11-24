#include <stdio.h>

int main(void)
{
    int m, i;
    char string[100000];

    while (scanf("%d", &m) != EOF)
    {
        scanf("%s", string);
        
        string[m] = '\0';
        
        for ( i = 0; i <= m; i++)
        {
            if (string[i] != '\0')
            {
                if (string[i] >= 65 && string[i] <= 90)
                {
                    string[i] += 32;
                    printf("%c", string[i]);
                }
                else if (string[i] >= 97 && string[i] <= 122)
                {
                    printf("%c", string[i]);
                }
                else
                {
                    ;
                }
            } 
            else
            {
                printf("\n");
            }
        }
    }

    return 0;
}