#include <stdio.h>

int main(void)
{
    int n;
    int m[100];

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &m[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < m[i] - 1; j++) /*顶部*/
        {
            printf("-");
        }
        printf("-\n");

        printf("\\");

        for (int j = 0; j < m[i] - 3; j++)/*中部第一行*/
        {
            printf(" ");
        }

        printf("/\n");

        for (int j = 1; j <= (m[i] - 4)/2; j++)/*中部上部*/
        {
            for (int k = 1; k <= j; k++)
            {
                printf(" ");
            }
            
            printf("\\");

            for (int k = 0; k < (m[i] - 5) - (j - 1) * 2; k++)
            {
                printf("*");
            }
            
            printf("/\n");
        }
        


        for (int j = (m[i] - 2)/2; j >= 1; j--)/*中部下部*/
        {
            for (int k = j-1; k > 0; k--)
            {
                printf(" ");
            }
            
            printf("/");

            for (int k = 0; k + j < (m[i] - 2)/2; k++)
            {
                printf(" ");
            }

            printf("*");

            for (int k = 0; k + j < (m[i] - 2)/2; k++)
            {
                printf(" ");
            }
            
            printf("\\\n");
        }








        for (int j = 1; j < m[i] - 1; j++) /*底部*/
        {
            printf("-");
        }
        printf("-\n");

        printf("\n");
    }
    
}