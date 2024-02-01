#include <stdio.h>
#include<stdbool.h>

int qualityPoints( double avr)
{
        if(avr>=90)return 4;
        else if(avr>=80) return 3;
        else if(avr>=70)return 2;
        else if(avr>=60)return 1;
        else return 0;
}
int main()
{
    double avr;
    scanf("%lf",&avr);
    printf("%d",qualityPoints(avr));
    return 0;
}
