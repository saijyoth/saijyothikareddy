#include<stdio.h>
void main()
{
    int i,n,a=0,b=1,nextterm;
    printf("\n enter N ");
    scanf("\n %d",&n);

    printf("\n fibonacci series :");
    for(int i=1;i<=n;++i)
    {
        printf("\n %d",a);
        nextterm=a+b;
        a=b;
        b=nextterm;
    }



}
