#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
#include"header.h"
void display(stackentry ele)
{
    printf("%d\n",ele.x);
}
int main()
{
    stack st;
	init_st(&st);
    stackentry ele1,ele2,check;
    ele1.x=1,ele2.x=2;
    push(ele1,&st);
    push(ele2,&st);
    top(&check,&st);
	int n=stacksize(&st);
	printf(" nn === %d\n",n);
    display(check);
    traversestack(&st,&display);
    pop(&check,&st);
    display(check);
    traversestack(&st,&display);
    return 0;
}
