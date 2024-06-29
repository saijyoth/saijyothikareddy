
#include<stdio.h>
void main()
{
    int tel,hin,eng,mat,sci,soc,Tot,avg;
    printf("\n Enter tel value : ");
    scanf("%d",&tel);
    printf("\n Enter hin value : ");
    scanf("%d",&hin);
    printf("\n Enter eng value : ");
    scanf("%d",&eng);
    printf("\n Enter mat value : ");
    scanf("%d",&mat);
    printf("\n Enter sci value : ");
    scanf("%d",&sci);
    printf("\n Enter soc value : ");
    scanf("%d",&soc);
    Tot=tel+hin+eng+mat+sci+soc;
    printf("\n total marks %d",Tot);
    avg=Tot/6;
    printf("\n average marks %d",avg);


}
