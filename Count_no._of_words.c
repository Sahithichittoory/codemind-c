#include<stdio.h>
int main()
{
    char str[100];
    int i,wc=1;
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]==' ')
        wc++;
    }
    printf("%d",wc);
}