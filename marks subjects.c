#include<stdio.h>
void main()
{
    int telugu,english,maths,science,social,hindi;
    int totalmarks;
    float averagemarks;
    int highestmarks,lowestmarks;
    printf("\n enter marks for telugu : ");
    scanf("%d",&telugu);
    printf("\n enter marks for english : ");
   scanf("%d",&english);
    printf("enter marks for maths : ");
   scanf("%d",&maths);
    printf("enter marks for science : ");
   scanf("%d",&science);
   printf("enter marks for social : ");
   scanf("%d",&social);
    printf("enter marks for hindi : ");
   scanf("%d",&hindi);
   totalmarks=telugu+english+maths+science+social+hindi;

   averagemarks=totalmarks/6.0;

   highestmarks=telugu;

   lowestmarks=telugu;

   if(english>highestmarks)
    highestmarks=english;
     if(maths>highestmarks)
    highestmarks=maths;
     if(science>highestmarks)
    highestmarks=science;
   if(social>highestmarks)
    highestmarks=social;
     if(hindi>highestmarks)
    highestmarks=hindi;

    if(english<lowestmarks)
        lowestmarks=english;
    if(maths<lowestmarks)
        lowestmarks=maths;
        if(science<lowestmarks)
        lowestmarks=science;
        if(social<lowestmarks)
        lowestmarks=social;
        if(hindi<lowestmarks)
        lowestmarks=hindi;

        else
        if(telugu<averagemarks)
        printf("\n\n failed in telugu /n ",telugu);
        else
        if(english<averagemarks)
        printf("\n\n failed in english /n ",english);
        else
        if(maths<averagemarks)
        printf("\n\n failed in maths /n ",maths);
        else
        if(science<averagemarks)
        printf("\n\n failed in science /n ",science);
        else
        if(social<averagemarks)
        printf("\n\n failed in social /n ",social);
        else
        if(hindi<averagemarks)
        printf("\n\n failed in hindi /n ",hindi);

        printf("totalmarks:%d\n",totalmarks);
        printf("averagemarks:%2f\n",averagemarks);
        printf("highestmarks:%d\n",highestmarks);
        printf("lowestmarks:%d\n",lowestmarks);
        getch();
        return 0;



}
