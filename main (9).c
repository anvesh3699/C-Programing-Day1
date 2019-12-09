#include<stdio.h>
int main()
{
    int n;
    printf("\n enter anumber :");
    scanf("%d",&n);
    printf(n>0 ? "+ve":n<0 ?"-ve ":"zero");
}