//write a c-program to print sum of first n natural numbers
#include<stdio.h>
void main()
{
    {
        int i,n,sum=0;
        printf("\n Enter how many numbers you want to sum : ");
        scanf("%d",&n);
        for(i=0;i<=n;i++)
        {

            sum+=i;
            printf("\t The I value is %d",i);
        }
        printf("\n The sum of first n natural numbers are %d",sum);
        printf("\n ");
    }
}
