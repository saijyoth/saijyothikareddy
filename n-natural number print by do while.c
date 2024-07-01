//write a c-program to calculate sum of digits of a number

#include<stdio.h>
int main()
{
    int i,j,sum=0;
    printf("\n Enter how many numbers you want");
    scanf("%d",&i);
    do
{
    j=i%10;
    sum+=j;
    i/=10;
}  while (i!=0);
    printf("\n %d",i);
    i++;

return 0;
}
