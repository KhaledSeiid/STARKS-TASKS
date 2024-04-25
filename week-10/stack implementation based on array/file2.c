#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
#include"header.h"
void init_st(stack *pst)
{
    pst->top=0;
}

void push(stackentry ele , stack *pst)
{
    pst->entry[pst->top]=ele;
    pst->top++;
}
void pop(stackentry *pn , stack *pst)
{
   *pn=pst->entry[--pst->top];
}
void top(stackentry *pn , stack *pst)
{
   *pn=pst->entry[pst->top-1];
}
int stacksize(stack *pst)
{
   return pst->top;
}
bool stackfull(stack *pst)
{
    return pst->top==MAXSTACK;
}
bool stackempty(stack *pst)
{
    return pst->top==0;
}
void clearstack(stack *pst)
{
    pst->top=0;
}
void traversestack(stack *pst,void (*pf)(stackentry ele))
{
    for(int i=pst->top-1  ; i>=0 ; i--)
        (*pf)(pst->entry[i]);
}
