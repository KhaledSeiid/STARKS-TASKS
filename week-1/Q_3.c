#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
     printf("enter number of character:");
     scanf("%d",&n);
    for(int i=0 ; i<n ; i++)
    {
         printf("enter new char:");
        char ch;
        fflush(stdin);
        scanf("%c",&ch);
        if(ch=='a')
        {
            printf("char:%c \t ascii:%d \t next:%c\n",ch,ch,ch+1);
        }
        else if(ch=='z')
        {
             printf("char:%c \t ascii:%d \t previous:%c\n",ch,ch,ch-1);
        }
        else
        {
            printf("char:%c \t ascii:%d \t previous:%c \t next:%c\n",ch ,ch,ch-1,ch+1);
        }

    }
}