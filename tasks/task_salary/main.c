#include <stdio.h>
#include <stdlib.h>

int main()
{
  float x ,tax,net_pay;
  printf("Enter the hours you worked for this week\n");
  scanf("%f",&x);
  if(x<=60&&x>=20)
  {
      if (x>40 )
  {
      x=40*10+(x-40)*10*1.5;
  }
  else
  {
      x=x*10;
  }
  printf("Your gross pay is %.2f $\n",x);//the .2 before f in %.2f means it will only print 2 numbers after point
  if(x<=300)
  {
      tax=x*.15;
  }
  else if (x<=450 && x >300)
  {
      tax=300*.15 + (x-300)*.2;
  }
  else
  {
      tax=300*.15 + 150*.2 + (x-450)*.25;
  }
    printf("your tax is %f $\n",tax);
    net_pay = x-tax;
    printf("Your net pay is %f $\n",net_pay);
  }
  else
  {
      printf("Not allowed work hours\n");
  }

    return 0;
}
