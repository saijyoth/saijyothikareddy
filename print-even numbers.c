#include<stdio.h>
void main()
{
    int N;
    printf("\n Enter N ");
    scanf("\n %d",&N);

    for(int i=2;i<=N;i+=2)
    {
      printf("\n %d ",i);
    }
}
