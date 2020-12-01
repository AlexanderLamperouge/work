#include<stdio.h>

int main()
{
    int n, i, a[100], sum = 0;
    while(scanf("%d", &n) != EOF)
    {
        for(i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }

        for (i = 0; i < n; i++)
        {
            sum += a[i] / 100;
            a[i] = a[i] % 100;

            sum += a[i] / 50;
            a[i] = a[i] % 50;

            sum += a[i] / 10;
            a[i] = a[i] % 10;

            sum += a[i] / 5;
            a[i] = a[i] % 5;

            sum += a[i] / 2;
            a[i] = a[i] % 2;

            sum += a[i] / 1;
        }

        printf("%d\n", sum); 

        sum = 0;
    }
    return 0;
}