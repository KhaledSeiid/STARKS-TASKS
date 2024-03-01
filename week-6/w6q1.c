#include <stdio.h>
#include <stdlib.h>
#define ll long long
typedef struct
{
    int salary,bonus,deduction;
}employees;
int main()
{
    employees arr[3];
    for(int i=0 ; i<3 ; i++)
    {
        printf("enter employee  number [%d] salary , bonus , deduction : ",i+1);
        scanf("%d%d%d",&arr[i].salary,&arr[i].bonus,&arr[i].deduction);
    }
    ll res=0;
    for(int i=0 ; i<3 ; i++)
    {
        res+=(arr[i].salary+arr[i].bonus-arr[i].deduction);
    }
    printf("total value is: %lld",res);
    return 0;
}
