#include<stdio.h>
int main ()
{
    int a;
    scanf("%d",&a);
    int b;
    b=(a*a);
    int r,s=0;
    while (b!=0)
    {
        r=b%10;
        b=b/10;
        s=s+r;
    }
    if (s==a) printf("Neon Number");
    else printf("Not Neon Number");
}