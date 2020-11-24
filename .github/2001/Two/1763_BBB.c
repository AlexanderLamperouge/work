#include <stdio.h>

int main(void)
{
  double a, b;
  
  int  i;
  
  while(scanf("%lf",&a) != EOF)
  {
    double standardList[6] = {80000,55000,35000,25000,12000,3000};
    double rateList[7]   = {0.45,0.35,0.30,0.25,0.20,0.10,0.03};
    double incomeList[7]  = {0,0,0,0,0,0,0};
    double money = 0;

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
    printf("%.2lf\n", b - money);
  }  
}