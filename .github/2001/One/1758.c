#include <stdio.h>
#include <math.h>

int main(void)
{
    int x;
    double y;
    double Pi = 3.1415926535;

    while(scanf("%d", &x) != EOF)
    {
        if (x >= 0 && x < 10)
        {
            y = cos (x + 3.0);
            printf("%.5lf\n", y);
        }
        else if(x >= 10 && x < 20)
        {
            y = pow(cos (x + 7.5), 2);
            printf("%.5lf\n", y);
        }
        else if(x >= 20 && x < 30)
        {
            y = pow((cos (x + 4.0)), 4);
            printf("%.5lf\n", y);
        }
        else
        {
            printf("Not define\n");
        }
    }
    
    return 0;
}