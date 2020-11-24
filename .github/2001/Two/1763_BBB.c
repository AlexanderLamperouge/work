#include <stdio.h>

int main(void)
{
  float a, b;

  float standardList[6] = {80000,55000,35000,25000,12000,3000};
  float rateList[7]   = {0.45,0.35,0.30,0.25,0.20,0.10,0.03};
  float incomeList[7]  = {0,0,0,0,0,0,0};
  float money = 0;
  
  int  i;
  
  
  while(scanf("%f",&a) != EOF)
  {
    money = 0;
    b = a;
    for(i=0;i<6;i++)
    {
      if(a>=standardList[i])
      {
        incomeList[i] = a - standardList[i];
        a -= incomeList[i];
      }
    }
    incomeList[6] = a;

    for(i=0;i<7;i++)
      money += rateList[i] * incomeList[i];

    //output result
    printf("%.2f\n", b - money);
  }  


  
}