#include<stdio.h>
int main()
{
    int s=0,n,i,flag=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+a[i];
    }
    int avg;
    avg=s/n;
    for(i=0;i<n;i++)
    {
        if(a[i]==avg)
        {
          flag=1;
          break;
        }
    }
    if(flag==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
