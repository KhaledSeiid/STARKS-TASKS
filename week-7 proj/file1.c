#include<stdio.h>
#include <stdbool.h>
typedef struct
{
    char name[10];
    int quantity;
    int price;
}products;
    products list[5];
void init()
{
	for(int i= 0; i<5 ; i++)scanf("%s%d%d",&list[i].name,&list[i].price,&list[i].quantity),fflush(stdin);
	//printf("hello from file_1");
}
void print_admin()
{
	printf("\tName\tQuantity\tPrice\n");
              for(int i= 0 ;i<5 ; i++)
              {printf("(%d)\t",i+1);
                  printf("%s\t%d\t\t%d\n",list[i].name,list[i].quantity,list[i].price);
              }
}
void update()
{
	                  int check;
                  scanf("%d",&check);
                      while(check)
                      {
						  printf("enter number of  product :");
						  int num_of_prod;
						  scanf("%d",&num_of_prod);
                          int check2;
                           printf("to update quantity enter 1:\nto update price enter 2\nto update both together enter 3\n :");
                            scanf("%d",&check2);
                           switch(check2)
                           {
                           case 1:
                            {
                                printf("enter quantity:");
                                scanf("%d",&list[num_of_prod-1].quantity);
                            }break;
                            case 2:
                            {
                                 printf("enter price:");
                                 scanf("%d",&list[num_of_prod-1].price);
                            }break;
                            case 3:
                            {
                                printf("enter quantity:");
                                scanf("%d",&list[num_of_prod-1].quantity);
                                printf("enter price:");
                                scanf("%d",&list[num_of_prod-1].price);
                            }break;
                            default:
                                printf("enter valid choise!\n");
                           }
                           printf("to continue enter 1\nto exist enter 0\n :");
                          scanf("%d",&check);
                      }
}
void print_user()
{
	printf("\tName\tPrice\n");
              for(int i= 0 ;i<5 ; i++)
              {printf("(%d)\t",i+1);
                  printf("%s\t%d\n",list[i].name,list[i].price);
              }
}
int buy()
{
					int sum=0;
					int check;
                    scanf("%d",&check);
                    while(check)
                    {
                        int prod,quant;
                        printf("please enter number of product and quantity:");
                        scanf("%d%d",&prod,&quant);
                        if(quant>list[prod-1].quantity)
                        {
                            printf("sorry there is only %d in stock",list[prod-1].quantity);
                        }
                        sum+=list[prod-1].price*quant;
                        printf("to continue enter 1\nto exist enter 0\n :");
                          scanf("%d",&check);
                    }
					return sum;
}
void sub_user()
{
	char user[10];
            int pass;
			printf("enter your user name:");
                    scanf("%s",&user);
                    printf("enter your password:");
                    scanf("%d",&pass);
}