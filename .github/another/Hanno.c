#include <stdio.h>

int hannoi(int n, int start, int trans, int dest)
{
    if (n == 1)
    {
        move(n, start, trans);
    }
    else if (n >= 2)
    {
        hannoi(n - 1, start, dest, trans);
        move(n, start, trans);
        hannoi(n - 1, dest, trans, start);
    }
}

void move(int inumber, int here, int there)
{
    printf("%d|%d-->%d\n", inumber, here, there);
}

int main(void)
{
    int number, start, trans;

    while (printf("Please scanf the number of Hanno: "))
    {
        scanf("%d", &number);

        printf("Please scanf the start of Hanno: ");
        scanf("%d", &start);

        printf("Please scanf the trans of Hanno: ");
        scanf("%d", &trans);

        hannoi(number, start, trans, (6 - start - trans));

        printf("Steps is %d\n", hannoi);
    }

    return 0;
}