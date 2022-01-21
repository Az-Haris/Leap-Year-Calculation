#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int year, a, b, c;
    printf("Please Enter a Year to Calculate Leap-Year : ");
    scanf("%d",&year);

    a=year%4;
    b=year%100;
    c=year%400;

    if((a==0)&&(b!=0)||(c==0))
    {
        printf("This (%d) Year is Leap-Year",year);
    }
    else
    {
        printf("This (%d) Year is Not Leap-Year",year);
    }

    getch();
    return 0;
}
