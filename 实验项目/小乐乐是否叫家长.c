#include<stdio.h>
int main()
{
    int a,b,c,e;
    scanf("%d %d %d",&a,&b,&c);
    e=(a+b+c)/3;
    if(e>=60)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }
}
