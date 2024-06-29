
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
    if(tel>hin && tel>eng && tel>mat && tel>sci && tel>soc)
    printf("\n tel is the highest %d",tel);
    else
        if(hin>tel && hin>eng && hin>mat && hin>sci && hin>soc)
    printf("\n hin is the highest %d",hin);
    else
        if(eng>tel && eng>hin && eng>mat && eng>sci && eng>soc)
        printf("\n eng is the highest %d",eng);
        else
            if (mat>tel && mat>hin && mat>eng && mat>sci && mat>soc)
            printf("\n maths is the highest %d",mat);
        else
            if(sci>tel && sci>hin && sci>eng && sci>mat && sci>soc)
            printf("\n science is the highest %d",sci);
            else
                if(soc>tel && soc>hin && soc>eng && soc>mat && soc>sci)
                printf("\n social is the highest %d",soc);

            if(tel<hin && tel<eng && tel<mat && tel<sci && tel<soc)
    printf("\n tel is the lowest %d",tel);
    else
        if(hin<tel && hin<eng && hin<mat && hin<sci && hin<soc)
    printf("\n hin is the lowest %d",hin);
    else
        if(eng<tel && eng<hin && eng<mat && eng<sci && eng<soc)
        printf("\n eng is the lowest %d",eng);
        else
            if (mat<tel && mat<hin && mat<eng && mat<sci && mat<soc)
            printf("\n maths is the lowest %d",mat);
        else
            if(sci<tel && sci<hin && sci<eng && sci<mat && sci<soc)
            printf("\n science is the lowest %d",sci);
            else
                if(soc<tel && soc<hin && soc<eng && soc<mat && soc<sci)
                printf("\n social is the lowest %d",soc);

                if(tel>avg)
                printf("\n is passed in telugu %d", tel);
                 if(hin>avg)
                printf("\n is passed in hindi %d", hin);
                 if(eng>avg)
                printf("\n is passed in english %d", eng);
                 if(mat>avg)
                printf("\n is passed in maths %d", mat);
                 if(sci>avg)
                printf("\n is passed in science %d", sci);
                 if(soc>avg)
                printf("\n is passed in social %d", soc);




}
