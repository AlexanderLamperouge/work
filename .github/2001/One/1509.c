#include <stdio.h>

int main(void)
{
    int iEmptyBottle[10], iDrinkNumber[10], x[10];
    int i;

	for(i = 0;i < 10; i++)
    {
        iEmptyBottle[i] = 0;
        iDrinkNumber[i] = 0;
        x[i] = 0;
    }

    for(i = 0; i < 10; i++)
    {
        scanf("%d", &iEmptyBottle[i]);
    //    printf("\t%d|%d\n", i, iEmptyBottle[i]);

        if(iEmptyBottle[i] == 0)
        break;
    }

    for(i = 0; i < 10; i++)
    {
        if(iEmptyBottle[i] == 0)
        break;

        x[i] = iEmptyBottle[i];
        
    //    printf("x[%d] = %d\n", i, x[i]);
    }

    for(i = 0; i < 10; i++)
    {
        while( iEmptyBottle[i] > 1 )
        {
        if( (iEmptyBottle[i]) == 2 )
        {
            iDrinkNumber[i] += 1; 
            break; 
        }
        
        iDrinkNumber[i] = iDrinkNumber[i] + iEmptyBottle[i] / 3;
        iEmptyBottle[i] = iEmptyBottle[i] % 3 + iEmptyBottle[i] / 3;

    //    printf("\t%d|%d\n", i, iEmptyBottle[i]);
        }
    }

    for(i = 0; i < 10; i++)
    {
        if (x[i] == 1)
        {
            iDrinkNumber[i] = 1;
        }

        if (x[i] == 2)
        {
            iDrinkNumber[i] = 2;
        }

        if(iDrinkNumber[i] > 0)
        {
            printf("%d\n", iDrinkNumber[i]);            
        }

    }

    return 0;
}