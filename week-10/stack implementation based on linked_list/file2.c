#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
#include"header.h"
void init_st(stack *pst)
{
    pst->top=NULL;
}

void push(stackentry ele , stack *pst)
{
    stacknode *pn=(stacknode *)malloc(sizeof(stacknode));
    pn->x=ele;
    pn->next=pst->top;
    pst->top=pn;
}
void pop(stackentry *ele , stack *pst)
{
    stacknode *pn=pst->top;
   *ele=pst->top->x;
   pst->top=pst->top->next;
   free(pn);
}
void top(stackentry *pn , stack *pst)
{
   *pn=pst->top->x;
}

bool stackfull(stack *pst)
{
    return 0;
}
bool stackempty(stack *pst)
{
    return pst->top==NULL;
}
void clearstack(stack *pst)
{
    stacknode *pn=pst->top;
    while(pst->top)
    {
        pn=pst->top;
        pst->top=pst->top->next;
        free(pn);
    }
}
int stacksize(stack *pst)
{
	int n=0;
	 stacknode *pn=pst->top;
	 while(pn)
	 {
		 n++;
		 pn=pn->next;
	 }
	 return n;
}
void traversestack(stack *pst,void(*pf)(stackentry ele))
{
   stacknode *pn=pst->top;
   while(pn)
   {
        (*pf)(pn->x);
        pn=pn->next;
   }
}
