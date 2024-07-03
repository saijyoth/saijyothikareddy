#include<stdio.h>
int main()
{
    int N,sum=0;
    printf("\n Enter N ");
    scanf("\n %d",&N);

    for(int i=1;i<=N;++i)
    {
        sum+=i;
    }
    printf("\n sum of first %d natural numbers is ; %d \N",N,sum);
}
