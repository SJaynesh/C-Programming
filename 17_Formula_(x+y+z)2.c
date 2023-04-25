// WAP to find a the answer given formula (x+y+z)2.

#include<stdio.h>
#include<conio.h>

void main()
{
    int x,y,z;


    printf("Enter the value of a :");
    scanf("%d",&x);
    printf("\nEnter the value of b :");
    scanf("%d",&y);
    printf("\nEnter the value of z :");
    scanf("%d",&z);

    printf("x = %d\ny = %d\nz = %d",x,y,z);

    printf("\t----- FORMULA (x+y+z)2 -----\n\n");

    printf("(x+y+z)2 = %d", (x*x)+(y*y)+(z*z)+(2*x*y)+(2*y*z)+(2*z*x));

}
