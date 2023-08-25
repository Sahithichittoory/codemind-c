#include<stdio.h>
int main()
{
    int i=0,n,m;
    scanf("%d%d",&n,&m);
    while(1)
    {
        i++;
        if(n*i%m==0)
        {
            break;
        }
    }
    printf("%d",n*i);
}