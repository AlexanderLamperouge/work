#include <stdio.h>

int main(void)
{
    int  score;
    char gpa;

    while (scanf("%d", &score) != EOF)
    {
        if (score < 0 || score > 100)
        {
            printf("Score is error!\n");
        }
        else
        {
            if (score >= 90)
            {
                gpa = 'A';
            }
            
            else
            {
                if (score >= 80)
                {
                    gpa = 'B';
                }
                
                else
                {
                    if (score >= 70)
                    {
                        gpa = 'C';
                    }
                    
                    else
                    {
                        if (score >= 60)
                        {
                            gpa = 'D';
                        }

                        else
                        {
                            gpa = 'E';
                        }
                        
                    }
                }
            }
            printf("%c\n", gpa); 
        }   

    }

    return 0;
}
