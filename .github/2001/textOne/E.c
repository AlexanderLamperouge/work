#include<stdio.h>

int main()
{
    int a, b, x = 0;

    while(scanf("%d %d", &a, &b) != EOF)
    {

        if(a < b)
        {
            int c;
            c = a;
            a = b;
            b = c;
        }

        for(int i = a - b + 1; i <= a + b; i++)
        {
            int i2 = i * i, a2 = a * a, b2 = b * b;

            if(i2 == a2 + b2 || a2 == i2 + b2 || b2 == a2 + i2)
            {
                printf("%d\n", i);
                x = 1;
                break;
            }
        }

        if(x == 0)
        printf("None\n");
    }
    return 0;
}