#ifndef HEADER_H
#define HEADER_H

#include <stdbool.h>

#define MAXSTACK 100
typedef struct
{
    int x;
}stackentry;
typedef struct
{
    stackentry entry[MAXSTACK];
    int top;
}stack;
void init_st(stack *pst);
void push(stackentry ele , stack *pst);
void pop(stackentry *pn , stack *pst);
void top(stackentry *pn , stack *pst);
int stacksize(stack *pst);
bool stackfull(stack *pst);
bool stackempty(stack *pst);
void clearstack(stack *pst);
void traversestack(stack *pst,void (*pf)(stackentry ele));
#endif /* HEADER_H */
