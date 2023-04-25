// Write C program to convert temperature from degree Celsius to Fahrenheit.
// F = (9/5 x C) + 32 

#include<stdio.h>
#include<conio.h>

void main()
{
   float c,f;


   printf("enter the value of c :");
   scanf("%f", &c);

   f = (c * 9 / 5) + 32;

   printf("%.2f c = %.2f f",  c , f);

}