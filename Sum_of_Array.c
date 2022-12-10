#include<stdio.h>
int main()
{
    int N,i;
    scanf("%d",&N);
    int a[N],sum=0;
    for(i=1;i<=N;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("%d",sum);
}