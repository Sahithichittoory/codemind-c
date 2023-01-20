#include <stdio.h>
int main()
{
    int n,s=0,m;
    scanf("%d",&n);
    while(n!=0)
    {
        n=n/10;
        s++;
        if(s==10 && n==0)
        {
            s--;
        }
    }
    if(s==9)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
}