#include<stdio.h>
int main()
{
    int avg,e,m,p,c,cs;
    scanf("%d%d%d%d%d",&e,&m,&p,&c,&cs);
    avg=(e+m+p+c+cs)/5;
    if(e>=35 && m>=35 && p>=35 && c>=35 && cs>=35)
    {
        printf("PASSED");
    }
    else
    {
        printf("FAILED");
    }
}