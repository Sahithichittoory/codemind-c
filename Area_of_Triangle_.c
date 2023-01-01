#include<stdio.h>
#include<math.h>
int main()
{
    float s,x,y,z,a;
    scanf("%f%f%f",&x,&y,&z);
    s=(x+y+z)/2;
    a=sqrt((s)*(s-x)*(s-y)*(s-z));
    printf("%0.2f",a);
}