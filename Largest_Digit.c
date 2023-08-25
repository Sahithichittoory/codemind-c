#include<stdio.h>
int main()
{
    int n,rem,I=0;
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        if(I<rem)
        {
            I=rem;
        }
        n=n/10;
    }
    printf("%d",I);
}