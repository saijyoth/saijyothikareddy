#include<stdio.h>
void main()
{
    int N,isprime=1;
    printf("\n Enter N ");
    scanf("\n %d",&N);

    for(int i=2;i<=N;i++)
    {
        if (N% i==0)
        {
            isprime=0;
        }
            break;
    }
    if(isprime)
    {
       printf("%d is prime.\n", N);
    }
     else
     {
       printf("%d is not prime.\n", N);
    }
    return 0;
}
