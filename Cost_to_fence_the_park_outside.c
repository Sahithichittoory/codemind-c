#include<stdio.h>
int main()
{
    int l,b,w,a,a1,a2,t,c;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    a1=(l+2*w)*(b+2*w);
    a2=l*b;
    a=a1-a2;
    t=a*c;
    printf("%d",t);
}