#include<stdio.h>
int main()
{
    int n;
    printf("\n enter anumber :");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("\n %d is even",n);
    }
    if(n%2==1)
    {
        printf("\n %d is odd",n);
    }
}