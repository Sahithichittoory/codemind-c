#include<stdio.h>
int main()
{
    int ph,ch,b,m,c,p;
    scanf("%d%d%d%d%d",&ph,&ch,&b,&m,&c);
    p=(ph+ch+b+m+c)/5;
    if(p>=90)
    {
        printf("Grade A");
    }
    else if(p>=80)
    {
        printf("Grade B");
    }
    else if(p>=70)
    {
        printf("Grade C");
    }
    else if(p>=60)
    {
        printf("Grade D");
    }
    else if(p>=40)
    {
        printf("Grade E");
    }
    else if(p<40)
    {
        printf("Grade F");
    }
}