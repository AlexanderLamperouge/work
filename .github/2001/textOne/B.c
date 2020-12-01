#include <stdio.h>

int main(void)
{
    int m;
    int k, j, l, i, n, y;
    char c[100]; 

    scanf("%d", &m);

    getchar();

    for ( i = 0; i < m; i++)
    {
        scanf("%c", &c[i]);
        getchar();
    }
    
    for ( k = 0; k < m; k++)
    {
        l = 0;
        y = 0;

        for ( j = 0; j < k + 1; j++)
        {
            n = k+1;

            for (i = 0; i < k+1; i++)/*第一行空格*/
            {
                printf(" ");
            }
            printf("%c\n", c[j]);/*第一行字符*/

            l++;
            y++;

            for (i = 0; i < (n - y); i++)/*第二行空格*/
            {
                printf(" ");
            }

            for ( i = 0; i < (l + 2); i++)/*第二行字符*/
            {
                printf("%c", c[j]);
            }
            printf("\n");

            l++;
            
        }
    }
    return 0;
}