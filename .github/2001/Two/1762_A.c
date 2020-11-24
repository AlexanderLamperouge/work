#include <stdio.h>

int main(void)
{
    int a, b, c;
    int sum;

    while (scanf("%d", &a) != EOF)
    {
        scanf("%d", &b);
        scanf("%d", &c);

        sum = a + b + c;

        if (sum < (a * b * c))
        {
            sum = (a * b * c);
        }

        if(sum < ((a + b) * c))
        {
            sum = (a + b) * c;
        }
        
        if(sum < (a * (b + c)))
        {
            sum = a * (b + c);
        }
        
        printf("%d\n", sum);
    }
    
    return 0;
}