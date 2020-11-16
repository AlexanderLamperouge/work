#include <stdio.h>

int main(void)
{
    int i = 0, j = 0;
    char string[1000];

    while (i >= 0)
    {
        gets(string);

        while (i >= 0)
        {
            if (string[i] >= 65 && string[i] <= 90)
            {
                if (string[i] < 70 && string[i]>= 65)
                {
                    string[i] += 21;
                }
                else if (string[i] == 70)
                {
                    string[i] = 'A';
                }
                else
                {
                    string[i] -= 5;
                }
            }
            else if (string[i] == 0)
            {
                j = i;
                break;
            }           
            i++;
        }
        for ( i = 0; string[i] != '\0'; i++)
        {
            printf("%c", string[i]);
        }

        i = 0;
    }
    
    return 0;
    
}