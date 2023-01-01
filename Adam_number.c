#include<stdio.h>
int main()
{
    int n,b,r,rev=0;
    scanf("%d",&n);
    b=n*n;
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    int c;
    c=rev*rev;
    int r2,rev2=0;
    while(c!=0)
    {
        r2=c%10;
        rev2=rev2*10+r2;
        c=c/10;
    }
    if(rev2==b)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}