#include<stdio.h>
int main()
{
    int N;
    int i;
    int o = 0;
    int j = 0;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        if(i%2==0)
            o++;
        else
            j++;
    }
    printf("%d %d",j,o);
}
