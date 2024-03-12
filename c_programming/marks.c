#include <stdio.h>
int main()
{
    int H,E,M;
    printf("enter the marks of hindi \n");
    scanf("%d",&H);
    printf("enter the marks of english \n");
    scanf("%d",&E);
    printf("enter the marks of mathematics \n");
    scanf("%d",&M);

    int totol_percentage =(H+E+M)/3;

    if(H>=33 && E>=33 && M>=33)
    {
        printf("Student is passed \n");
    }
    else
    {
        printf("Student is fail");
    }
    return 0;
}