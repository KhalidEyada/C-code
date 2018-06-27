#include <stdio.h>
#include <stdlib.h>
typedef int StackEntry;

typedef struct stackNode
{
    StackEntry entry;
    struct stackNode* Next;
}StackNode;
typedef struct
{
    StackNode *top;
    int size;
}Stack;

void ClearStack (Stack *ps);
void Push (StackEntry e,Stack *ps );
void Pop (StackEntry *pe,Stack *ps);
void TraversStack (Stack *ps,void (*pf)(StackEntry));

int main()
{

    return 0;
}
void ClearStack (Stack *ps)
{
    StackNode *pn=ps->top;
    while (pn)
    {
        pn=pn->Next;
        free(ps->top);
        ps->top=pn;
    }
    ps->size=0;
}
void Push (StackEntry e,Stack *ps )
{
    StackNode *pn=(StackNode*)malloc(sizeof(StackNode));
    pn->entry=e;
    pn->Next=ps->top;
    ps->top=pn;
    ps->size++;
}
void Pop (StackEntry *pe,Stack *ps)
{
    StackNode *pn;
    *pe=ps->top->entry;
    pn=ps->top;
    ps->top=ps->top->Next;
    free(pn);
    ps->size--;
}
void TraversStack (Stack *ps,void (*pf)(StackEntry))
{
    StackNode *pn=ps->top;
    while (pn)
    {
        (*pf)(pn->entry);
        pn=pn->Next;

    }
}
