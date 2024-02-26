#include <stdio.h>
#include <stdlib.h>
int main()
{
    char st=65;
    char *ptr=&st;
   for(int i=0 ; i<26 ; i++)
   {
       printf("%c\t",*ptr);
        (*ptr)++;
   }
    return 0;
}
