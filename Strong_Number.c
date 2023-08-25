#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int i,n,fact=1,sum=0,rem,num;
        scanf("%d",&n);
        int temp=n;
        while(n!=0)
        {
            int i=1;fact=1;
            rem=n%10;
            while(i<=rem)
            {
                fact=fact*i;
                i++;
            }
            sum=sum+fact;
            n=n/10;
        }
        if(sum==temp)
        printf("Strong
");
        else
        printf("Not Strong
");
    }
}