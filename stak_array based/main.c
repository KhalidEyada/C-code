#include <stdio.h>
#include <stdlib.h>
typedef int StackEntry;
#define MAXSTACK 100
typedef struct
{
    StackEntry entry [MAXSTACK];
    int top;
}Stack;
void CreatStack (Stack *ps);
int Stackfull(Stack *ps);
void Push (StackEntry e,Stack *ps);
int StackEmpty (Stack *ps);
void Pop (StackEntry *pe,Stack *ps);
int StackSize (Stack *ps);
void ClearStack (Stack *ps);
void Display (StackEntry e);
void TraversStack (Stack *ps,void (*pf)(StackEntry));
int main()
{
    StackEntry e=1;
    Stack s;
    CreatStack(&s);
    if (!Stackfull(&s))
        Push(e,&s);
    if(!StackEmpty(&s))
        Pop(&e,&s);
    int x=StackSize(&s);
    ClearStack(&s);
    TraversStack(&s,&Display);
    printf("%i",x);
    return 0;
}
void CreatStack (Stack *ps)
{
    ps->top=0;
}
int Stackfull(Stack *ps)
{
    if (ps->top==MAXSTACK)
        return 1;
    else
        return 0;
}
void Push (StackEntry e,Stack *ps)
{
    ps->entry[ps->top++]=e;

}
void Pop (StackEntry *pe,Stack *ps)
{
    *pe=ps->entry[--ps->top];
}
int StackEmpty (Stack *ps)
{
    return !ps->top;
}
int StackSize (Stack *ps)
{
    return ps->top;
}
void ClearStack (Stack *ps)
{
    ps->top=0;
}
void Display (StackEntry e)
{
    printf("e = %d",e);
}
void TraversStack (Stack *ps,void (*pf)(StackEntry))
{
    int i=(ps->top)-1;
    for(i;i>=0;i--)
    {
        (*pf)(ps->entry[i]);
    }
}
