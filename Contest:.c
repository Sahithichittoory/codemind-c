#include<stdio.h>
int main()
{
    int x,e,h;
    scanf("%d%d%d",&x,&e,&h);
    if(e*1+h*2>=x)
    {
        printf("Qualify");
    }
    else
    {
        printf("Not Qualify");
    }
}