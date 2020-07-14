#include<stdio.h>
int main()
{
    float a,b,c,d,sum;
    scanf("%f %f %f %f",&a,&b,&c,&d);
    a=a*0.2;
    b=b*0.1;
    c=c*0.2;
    d=d*0.5;
    sum=a+b+c+d;
    printf("%.1f",sum);
    return 0 ;
}
