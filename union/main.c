#include <stdio.h>
#include <stdlib.h>
typedef union
{
    int i;
    char x;
}un;
int main()
{
    un m;
    m.i=0x2344f5;
    m.x=0x17;
    printf("%0x",m.i);//here it will replace the last byte of m.i and replace it with 17 because union only uses the biggest data type and overwrites over it
    return 0;
}
