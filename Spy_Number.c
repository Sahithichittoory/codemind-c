#include<stdio.h>
int main()
{
    int a,sum=0,p=1,d;
    scanf("%d",&a);
    for(;a>0;)
    {
        d=a%10;
        sum=sum+d;
        p=p*d;
        a=a/10;
    }
    if(sum==p)
    {
        printf("Spy Number");
    }
    else
    {
    printf("Not Spy Number");
    }
}