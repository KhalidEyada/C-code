#include <stdio.h>
#include <stdlib.h>
void print (char c, int lines , int columns)
{
    int i=0,x=0;
    for (i=0;i<lines;i++)
    {
        for (x=0;x<columns;x++)
            printf("%c",c);
            printf("\n");
    }
}
int main()
{
  char c;
  int lines,columns;
  printf("Enter the character you want to print :\n");
  scanf("%c",&c);
  printf("Enter the number of lines you want to print :\n");
  scanf("%i",&lines);
  printf("Enter the number of columns you want to print :\n");
  scanf("%i",&columns);
  print(c,lines,columns);
    return 0;
}
