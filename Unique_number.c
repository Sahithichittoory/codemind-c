#include<stdio.h>
int main()
{
    int n,i,m,r,num,c=0;
    scanf("%d",&n);
    for(i=0;i<=9;i++)
    {
        num=n;
        m=0;
        while(num!=0)
        {
            r=num%10;
            if(r==i)
            ++m;
            num=num/10;
        }
        if(m>1)
        ++c;
    }
    if(c==0) 
    {
        printf("Unique Number");
    }
    else
    {
        printf("Not Unique Number");
    }
}