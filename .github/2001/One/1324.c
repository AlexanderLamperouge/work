#include <stdio.h>

int main(void)
{
    int M1, M2;
    int R1 = 0, R2 = 0, R3 = 0;
    int i = 0;
    char string[201];

    while (scanf("%d %d", &M1, &M2) && scanf("%s", string) != EOF)
    {   
        while (i >= 0)
        {
            if (string[i] != 0)
            {
                switch (string[i])
                {
                    case 'A': R1 = M1; break;
                    case 'B': R2 = M2; break;
                    case 'C': M1 = R3; break;
                    case 'D': M2 = R3; break;
                    case 'E': R3 = R1 + R2; break;
                    case 'F': R3 = R1 - R2; break;
                }

                i++;
            }
            else
            {
                break;
            }
        }
        printf("%d,%d", M1, M2);
    }

    return 0;
}