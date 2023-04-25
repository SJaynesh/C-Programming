// 1.WAP to find a the answer given formula (x+y)2.

#include<stdio.h>
#include<conio.h>

void main()
{
    int x,y;


    printf("Enter the value of a :");
    scanf("%d",&x);
    printf("\nEnter the value of b :");
    scanf("%d",&y);

    printf("x = %d\ny = %d\n",x,y);

    printf("\t----- FORMULA (x+y)2 -----\n\n");

    printf("(x+y)2 = %d", (x*x)+(2*x*y)+(y*y));

}