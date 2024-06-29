#include<stdio.h>
void main()
{
    int a,b,c;
    printf("\n Enter a value : ");
    scanf("%d",&a);
    printf("\n Enter b value : ");
    scanf("%d",&b);
    printf("\n Enter c value : ");
    scanf("%d",&c);
    if (a>b && a>c)
        printf(" \n A is Big %d",a);
    else
        if(b>a && b>c)
        printf("\n B is Big %d",b);
    else
        printf("\n C is Big %d",c);



}
