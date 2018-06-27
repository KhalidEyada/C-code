#include <stdio.h>
#include <stdlib.h>

int main()
{
  int x=5;
  while(x>=4&&x>=7)
  {
      printf("Enter x ");
      scanf("%i",&x);
      if(x==6)
        continue; // it will print all values except if he entered 6 because contin makes it restart the loop
        printf("%i",x);
  }
    return 0;
}
