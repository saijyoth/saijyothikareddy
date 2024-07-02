#include<stdio.h>
void main()
{
    int i,j,sum=0;
    printf("\n Enter any number : ");
    scanf("%d",&i);
    do
    {
        j=i%10;
        sum+=j;
        i/=10;
    }
    while(i!=0);
    printf("\n %d",sum);
    i++;
    }
