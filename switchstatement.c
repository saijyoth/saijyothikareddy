#include<stdio.h>
void main()
{
     int num, reversedNum = 0, remainder, originalNum;
      int i,n,factorial=1;
      int year;
      int side1 ,side2 ,side3;
    printf("Enter the option you want : ");
    scanf("%d", &num);
    switch(num)
    {
        case 1:
        printf("Enter an integer: ");
        scanf("%d", &num);

    originalNum = num;

    while (num != 0)
    {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }
    if (originalNum == reversedNum)
    {
        printf("%d is a palindrome.\n", originalNum);
    }
     else
     {
        printf("%d is not a palindrome.\n", originalNum);
     }
        case 2:
    printf("\n Enter any nnumber ");
    scanf("\n %d",&n);
    for(i=1;i<=n;i++)
    {
        factorial *=i;
    }
    printf("\n The factorial of %d is : %d\n",n,factorial);

       case 3:
            printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                printf("%d is a leap year.\n", year);
            } else {
                printf("%d is not a leap year.\n", year);
            }
        } else {
            printf("%d is a leap year.\n", year);
        }
    } else {
        printf("%d is not a leap year.\n", year);
    }
       case 4:
            printf("Enter three sides of a triangle: ");
    scanf("%d %d %d", &side1, &side2, &side3);

    if (side1 == side2 && side2 == side3) {
        printf("It is an equilateral triangle.\n");
    } else if (side1 == side2 || side2 == side3 || side1 == side3) {
        printf("It is an isosceles triangle.\n");
    } else {
        printf("It is a scalene triangle.\n");
    }

    return 0;
}

}





