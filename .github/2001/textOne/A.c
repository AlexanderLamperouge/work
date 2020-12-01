#include <stdio.h>
#include <math.h>

int main(void)
{
    int n, X, Y;
    int i;
    double j;
    int icoordinate[101][2];
    double coordinate[101];
    double a, b;

    while(scanf("%d %d %d", &n, &X, &Y) != EOF)
    {
        for ( i = 0; i < n; i++)
        {
            scanf("%d %d", &icoordinate[i][0], &icoordinate[i][1]);
        }

        for ( i = 0; i < n; i++)
        {
            a = pow((X - icoordinate[i][0]), 2);
            b = pow((Y - icoordinate[i][1]), 2);
            coordinate[i] = pow(a + b, 0.5);

            if (coordinate[i] < 0)
            {
                coordinate[i] = -coordinate[i];
            }
        }

        j = coordinate[0];

        for ( i = 1; i < n; i++)
        {
            if (coordinate[i] <= j)
            {
                j = coordinate[i];   
            }           
        }

        for ( i = 0; i < n; i++)
        {
            if (coordinate[i] == j)
            {
                printf("%d %d %d %.2lf\n", i+1, icoordinate[i][0], icoordinate[i][1], j);
                break;
            } 
        } 
    }
    return 0;
}