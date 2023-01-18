#include <stdio.h>
int main()
{
    long long int m,k;
    scanf("%lli",&m);
    for(k=1;k<=m;k++)
    {
        long long int n,m,i,s,c=0;
        scanf("%lli%lli",&n,&m);
        for(i=0;i<m;i++)
        {
            if(i*i%m==n) 
            {
                s=i; c++; break;
            }
        }
        if(c!=0)
        {
            printf("%lli
",i);
        }
        if(c==0)
        {
            printf("-1
");
        }
    }
    
}
