//  Write C Program to find gross salary.
//  Ex. Base Salary: 100 RS, HRA=10%, DA=5%, TA=8%.
//  Ans = 123 RS

#include<stdio.h>
#include<conio.h>

void main()
{
   int a , h , d , t;

   printf("enter the gross salary :");
   scanf("%d", &a);

   h = (a*10)/100;
   d = (a*5)/100;
   t = (a*8)/100;
   printf("HRA : %d\n", h);
   printf("DA : %d\n", d);
   printf("TA : %d\n", t);

   printf("gross salary : %d", a+h+d+t);

}