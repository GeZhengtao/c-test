#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
int max = a>=b?a:b;

    if(max >= c){
    }
    else{
        max = c;
    }
    printf("%d",max);
}
