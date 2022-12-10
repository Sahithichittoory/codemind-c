#include<stdio.h>
int main()
{
    int N,a[N],i,sum=0;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        scanf("%d",&a[i]);
        if(i%2==0)
        {
            sum=sum+a[i];
        }
    }
    printf("%d",sum);
}