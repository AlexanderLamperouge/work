#include <stdio.h>

int main(void)
{
    float a;
    float sum;

    while (scanf("%f", &a) != EOF)
    {
        sum = 0;
        
        if (a <= 3000)/*不超过3000元的部分*/
        {
            sum = a * 0.03;
        }

        if(a > 3000 && a <= 12000)/*超过3000元至12000元的部分*/
        {
            sum = 3000 * 0.03 + (a - 3000) * 0.1;
        }

        if(a > 12000 && a <= 25000)/*超过12000元至25000元的部分*/
        {
            sum = 3000 * 0.03 + 9000 * 0.1 + (a - 12000) * 0.2;
        }
        if(a > 25000 && a <= 35000)/*超过25000元至35000元的部分*/
        {
            sum = 3000 * 0.03 + 9000 * 0.1 + 13000 * 0.2 + (a - 25000) * 0.25;
        }

        if(a > 35000 && a <= 55000)/*超过35000元至55000元的部分*/
        {
            sum = 3000 * 0.03 + 9000 * 0.1 + 13000 * 0.2 + 10000 * 0.25 + (a - 35000) * 0.3;
        }

        if(a > 55000 && a <= 80000)/*超过55000元至80000元的部分*/
        {
            sum = 3000 * 0.03 + 9000 * 0.1 + 13000 * 0.2 + 10000 * 0.25 + 20000 * 0.3 + (a - 55000) * 0.35;
        }

        if(a > 80000)/*超过80000元的部分*/
        {
            sum = 3000 * 0.03 + 9000 * 0.1 + 13000 * 0.2 + 10000 * 0.25 + 20000 * 0.3 + 25000 * 0.35 + (a - 80000) * 0.45;
        }

        sum = a - sum;

        printf("%.2f\n", sum);    

    }   

    return 0;
}