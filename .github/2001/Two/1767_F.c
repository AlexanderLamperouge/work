#include <stdio.h>

int main(void)
{
    int Y, M, D;
    int N;

    while (scanf("%d %d %d", &Y, &M, &D) != EOF)
    {
        if (Y % 400==0 || (Y % 4 == 0 && Y % 100 != 0))
        {
            switch (M)/*闰年*/
            {
                case 1: N = D; break;
                case 2: N = 31 + D; break;
                case 3: N = 31 + 29 + D; break;
                case 4: N = 31 + 29 + 31 + D; break;
                case 5: N = 31 + 29 + 31 + 30 + D; break;
                case 6: N = 31 + 29 + 31 + 30 + 31 + D; break;
                case 7: N = 31 + 29 + 31 + 30 + 31 + 30 + D; break;
                case 8: N = 31 + 29 + 31 + 30 + 31 + 30 + 31 + D; break;
                case 9: N = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + D; break;
                case 10: N = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + D; break;
                case 11: N = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + D; break;
                case 12: N = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + D; break;
            }
        }
        else
        {
            switch (M)/*非闰年*/
            {
                case 1: N = D; break;
                case 2: N = 31 + D; break;
                case 3: N = 31 + 28 + D; break;
                case 4: N = 31 + 28 + 31 + D; break;
                case 5: N = 31 + 28 + 31 + 30 + D; break;
                case 6: N = 31 + 28 + 31 + 30 + 31 + D; break;
                case 7: N = 31 + 28 + 31 + 30 + 31 + 30 + D; break;
                case 8: N = 31 + 28 + 31 + 30 + 31 + 30 + 31 + D; break;
                case 9: N = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + D; break;
                case 10: N = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + D; break;
                case 11: N = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + D; break;
                case 12: N = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + D; break;
            }
        }

        printf("%d\n", N);
        
    }
    
    return 0;
}