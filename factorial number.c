//write a c-program to print a factorial number
#include<stdio.h>
void main()
{
    int i,n, factorial=1;
    printf("\n Enter any nnumber ");
    scanf("\n %d",&n);
    for(i=1;i<=n;i++)
    {
        factorial *=i;
    }
    printf("\n The factorial of %d is : %d\n",n,factorial);
}
