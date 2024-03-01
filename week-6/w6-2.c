#include <stdio.h>
#include <stdlib.h>
#define ll long long
typedef struct
{
    int hours,minutes,second;
}calc_period;
int main()
{
    calc_period start,end,res;
    printf("enter start point: ");
     scanf("%d%d%d",&start.hours,&start.minutes,&start.second);
    printf("enter end point: ");
     scanf("%d%d%d",&end.hours,&end.minutes,&end.second);
     res.hours=end.hours-start.hours,res.minutes=end.minutes-start.minutes,res.second=end.second-start.second;
        printf("answer:\n\thours  :%d\n\tminutes:%d\n\tsecond :%d",res.hours,res.minutes,res.second);
    return 0;
}
