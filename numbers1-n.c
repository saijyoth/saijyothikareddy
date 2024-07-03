//print numbers from 1 to N
#include<stdio.h>
void main()
{
    int N;
    printf("\n Enter N : ");
    scanf("\n %d",&N);

    for(int i=1;i<=N;++i)
    {
        printf("\n %d",i);
    }
    getch();
}
