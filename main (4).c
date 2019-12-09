#include<stdio.h>
int main()
{
    int a,b,x;
    printf("\n enter two values");
    scanf("%d%d",&a,&b);
    printf("\n before swap a=%d\t b=%d",a,b);
    x=a;
    a=b;
    b=x;
    printf("\n after swap a=%d\t b=%d",a,b);
}