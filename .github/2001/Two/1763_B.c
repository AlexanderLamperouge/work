#include <stdio.h>

int main(void)
{
    double a, b;
    double sum;

    while (scanf("%lf", &a) != EOF)
    {
        sum = 0;
        b = a;
        
        if (a - 3000 >= 0)/*不超过3000元的部分*/
        {
            sum = 3000 * 0.03;
            a -= 3000;

            if(a - 9000 >= 0)/*超过3000元至12000元的部分*/
            {
                sum += 9000 * 0.1;
                a -= 9000;

                if(a - 13000 >= 0)/*超过12000元至25000元的部分*/
                {
                    sum += 13000 * 0.2;
                    a -= 13000;

                    if(a - 10000 >= 0)/*超过25000元至35000元的部分*/
                    {
                        sum += 10000 * 0.25;
                        a -= 10000;

                        if(a - 20000 >= 0)/*超过35000元至55000元的部分*/
                        {
                            sum += 20000 * 0.3;
                            a -= 20000;

                            if(a - 25000 >= 0)/*超过55000元至80000元的部分*/
                            {
                                sum += 25000 * 0.35;
                                a -= 25000;

                                if(a >= 0)/*超过80000元的部分*/
                                {
                                    sum += a * 0.45;

                                }
                            }
                            else
                            {
                                sum += a * 0.35;

                            }        
                        }
                        else
                        {
                            sum += a * 0.3;

                        }
                    }
                    else
                    {
                        sum += a * 0.25;

                    }
                }
                else
                {
                    sum += a * 0.2;
                }
            }
            else
            {
                sum += a * 0.1;
            }
        }
        else
        {
            sum = a * 0.03;
        }

        sum = b - sum;

        printf("%.2lf\n", sum);    

    }   

    return 0;
}