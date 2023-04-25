// WAP to Find min. no. from given 2 no. using if else.

#include<stdio.h>
#include<conio.h>

void main()
{
   int a, b;

   printf("Enter the value of a:");
   scanf("%d",&a);
   printf("Enter the value of b:");
   scanf("%d",&b);

   printf("\n-----  MINIMUM NUMBER -----\n");

   if(a<b)
   {
     printf(" a is minimum number : %d",a);
   }
   else
   {
    printf(" b is not minimum number : %d",b);
   }

}