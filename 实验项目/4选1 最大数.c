#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    int tmp=a;
    if(b>tmp)
    {
        tmp=b;
    }
    if(c>tmp)
    {
        tmp=c;
    }
    if(d>tmp)
    {
        tmp=d;
    }
    printf("%d",tmp);
}
