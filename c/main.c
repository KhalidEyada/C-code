#include <stdio.h>
#include <stdlib.h>
struct mystruct
{
    int id;
    char x;

};
int main()
{
  struct mystruct x;
printf("%i",sizeof(x));
    return 0;
}
