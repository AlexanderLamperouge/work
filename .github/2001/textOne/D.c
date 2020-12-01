#include <stdio.h>

int main(void)
{
    double H, D, U, F, h, u;
    int j;

    while (scanf("%lf %lf %lf %lf", &H, &U, &D, &F) != EOF)
    {
        F /= 100.0;
        h = H;
        u = U;

        if (H == 0 && U == 0 && D == 0 && F == 0)
        {
            return 0;
        }

        for ( j = 1; j > 0; j++)
        {
            H -= U;/*早上往上爬*/
            if (H < 0)
            {
                printf("success on day %d\n", j);
                break;
            }

            H += D;/*晚上往下掉*/
            if (H > h)
            {
                printf("failure on day %d\n", j);
                break;
            }

            U = u * (1.0 - F*j);/*疲劳*/
            if (U <= 0)
            {
                U = 0;
            }
            
        }
    }
    return 0;
}