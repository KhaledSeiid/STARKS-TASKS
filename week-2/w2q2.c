#include<stdio.h>
typedef struct
{
	int id;
	int password;
}employees;
int main()
{
	employees users[1];
	users[0].id=4411,users[0].password=2003;
	int id=0;
	int password=0;
	while(1)
		{
			printf("enter your id:");
			scanf("%d",&id);
			if(id==users[0].id)
			{
				for(int i=0 ; i<3 ;i++)
					{
						printf("enter your password:");
						scanf("%d",&password);
							if(password==users[0].password)printf("WELCOME");
							else if(i==2)printf("No more tries!!\n");
							else  printf("invalid password you have %d trails\n",2-i);
					}
			}
			else printf("You are not registered\n");
		}
}