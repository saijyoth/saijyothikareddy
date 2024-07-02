// write a c-program to print multiplication of a table
#include<stdio.h>
//2*1=2
void main()
{
    //int i,j;
    int i,j,table,end;
    printf("\n Enter how many  tables you want");
    scanf("%d",&table);
    printf("\n Enter how many numbers you want");
    scanf("%d",&end);

    for(i=1;i<=table;i++)
    {
        for(j=1;j<=10;j++)
        {
            printf("\n %d * %d = %d",i,j,i*j);
            printf("\n ");
        }
        printf("\n");
    }
getch();
}
