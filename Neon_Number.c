#include<stdio.h>
int main()
{
    int a,b,r,s=0;
    scanf("%d",&a);
    b=a*a;
    while(b!=0)
    {
        r=b%10;
        s=s+r;
        b=b/10;
    }
    if(s==a)
    printf("Neon Number");
    else
    printf("Not Neon Number");
}