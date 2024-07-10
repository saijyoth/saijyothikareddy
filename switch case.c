#include<stdio.h>
void main()
{
    int age,a,b,c;
    printf("\n 1");
    printf("\n 2");
    printf("\n 3");
    printf("\n 4");

    printf("\n Enter Any option from 1 to 4 : ");
    scanf("\n %d",&age);
    switch(age)
    {
    case 1:
        printf("\n Enter a value :");
        scanf("%d",&a);
        printf("\n Enter b value : ");
        scanf("%d",&b);
        c=a+b;
        printf("\n the sum is %d,c");
        break;
    case 2:
        printf("\n Enter a value :");
        scanf("\n %d",&a);
        printf("\n Enter b value :");
        scanf("\n %d",&b);
        c=a-b;
        printf("\n the subtraction is %d",c);
        break;
    default:
        printf("\n Given sum is invalid");
        break;
    case 3:
        printf("\n Enter ");
            printf("\n Enter a value :");
        scanf("\n %d",&a);
        printf("\n Enter b value :");
        scanf("\n %d",&b);
        c=a*b;
        printf("\n the multiplication is %d",c);
        break;
    case 4:
            printf("\n Enter a value :");
        scanf("\n %d",&a);
        printf("\n Enter b value :");
        scanf("\n %d",&b);
        c=a/b;
        printf("\n the division is %d",c);
        break;
    }
    getch();
}
