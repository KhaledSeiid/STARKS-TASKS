#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
#include"header.h"

int main()
{
	init();
////////
    printf("\t\t***********************\n\t\t*\t\t      *\n\t\t*\tWelcome       *\n\t\t*\t\t      *\n\t\t***********************\n");
/////////
   int mode;
   while(1)
   {
       printf("if you are admin enter 1\nelse enter 0\n :");
       scanf("%d",&mode);
       switch(mode)
       {
       case 1:
           {
				print_admin();
				printf("to update list enter 1\nto exist enter 0\n :");
				update();
           }
           break;
       case 0:
        {
            int mode;
			print_user();
            printf("if you are subscriber enter 1\nelse enter 0\n :");
            scanf("%d",&mode);
              switch(mode)
              {
              case 1:
                {   
				sub_user();
					int user_card=100;
                    printf("to buy any product enter 1\nelse enter 0\n :");
                    int ch_buy=buy();
                    if(ch_buy)
                    {
						 printf("Total price of products :%d\n",ch_buy);
						if(ch_buy>user_card)printf("Sorry not enough money in your card, Please pay in cash\n");
						else printf("Successful,remaining balance :%d\n",user_card-ch_buy);
                    }
                }break;
              case 0:
               {
                    printf("to buy any product enter 1\nelse enter 0\n :");
					int ch_buy=buy();
                    if(ch_buy)
                    {
						 printf("Total price of products :%d\n",ch_buy);
						printf("Please pay in cash\n");
                    }
               }break;
              default:
                printf("enter valid choise!\n");
              }

        }
        break;
        default :
        printf("enter valid choise:");
       }

   }
    return 0;
}