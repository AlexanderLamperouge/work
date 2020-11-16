#include <stdio.h>

int main(void)
{
    int n = 0, number = 0, i = 0, even[100], sum = 0;
    //char s;

    scanf("%d", &n);

    //printf("%d\n", n);

    /*
    for (size_t i = 0; i < (n - 1); i++)
    {
        strcat(s, '%d ');
    }
    
    strcat(s, '%d');
    */

    for (size_t i = 0; i < n; i++)
    {
        scanf("%d", &number);

        getchar();

        even[i] = 0;

        if (number %2 == 0)
        {
            even[i] = number;
            sum += even[i];
            number = 0;
        }
        else
        {
            number = 0;
        }
        
    }
    
    /*
    for (size_t i = 0; i < n; i++)
    {
        printf("%d is %d\n", i, even[i]);
    }
    */

    /*
    for (size_t i = 0; i < n; i++)
    {
        sum += even[i];
    }
    */
    
    printf("%d", sum);

    return 0;
}



/*更简单的解法*/
/*
#include <stdio.h>

int main(void)
{
	  int iData, isignal=0;
	  int iResult = 0;
	  
	  scanf("%d", &iData);
//	  printf("1|%d\n", iData);

	  if( iData<0 )
	  {
	  	  isignal = 1;
	  	  iData = (-iData);
	  }
	 
	  while(iData>0)
	  {
	  	  iResult = iResult * 10;
//        printf("2|%d|%d\n", iData, iResult);

	  	  iResult = iResult + iData % 10;
	  	  	  	  
	  	  iData /= 10;

//        printf("3|%d|%d\n", iData, iResult);
	  }
	  
	  if(isignal == 1)
	  	iResult = (-iResult);
	  	
	  	
    printf("%d", iResult);

  return 0;
}
*/