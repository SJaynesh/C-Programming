// WAP to Find if a given no. is neutral or not using ladder if else.

#include<stdio.h>
#include<conio.h>

void main()
{
  int a;

  printf("Enter the value of a :");
  scanf("%d",&a);

  printf("\n ----- positive , nagitave, neutral -----\n\n");

  if(a>0)
  {
    printf("a is a positive number");
  }
  else if(a==0)
  {
   printf(" a is neutral number ");
  }
  else
  {
   printf(" a is negative number ");
  }

}