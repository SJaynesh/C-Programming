// 1 . WAP to Find area of circle.
// 2. WAP to Find area of sqare.
// 3. WAP to Find area of rectangle.
// 4. WAP to Find area of triangle.
// 5. WAP to Simple interest.
// 6. WAP to Perimeter of circle.


#include<stdio.h>
#include<conio.h>
#define pi 3.14
#define pf printf

void main()
{
    int r,l,w,b,h,p,a,n;
    
    r = 20;
    
    pf("\n --: AREA OF CIRCLE :--\n");
    pf("\n  Radius  of : %d",r);
    pf("\n  CIRCLE : %.3f", pi*r*r);

    l = 10;
    
    pf("\n\n --: AREA OF SQARE :-- \n");
    pf("\n  Lenght of : %d ", l);
    pf("\n  SQARE : %d", l*l);

    w = 12;
    
    pf("\n\n --: RECTANGLE :-- \n");
    pf("\n  Width : %d", w);
    pf("\n  RECTANGLE : %d", l*w);

    h = 2;
    b = 4;
    
    pf("\n\n --: TRIANGLE :-- \n");
    pf("\n  Heigth : %d \n  Base : %d", h,b);
    pf("\n  TRIANGLE : %.2f", 0.5*h*b);

    p = 12;
    a = 62;
    n = 22;
    
    pf("\n\n --: SIMPLE INTEREST :-- \n");
    pf("\n  Price : %d \n  Rate : %d \n  Number of year : %d", p,a,n);
    pf("\n  SIMPLE INTEREST  : %d", p*a*n/100);

    pf("\n\n --: PERIMETER OF CIRCLE :-- \n ");
    pf("\n  Radius  of : %d", r);
    pf("\n  PERAAMETERS OF CIRCLE : %.3f", 2*pi*r);

}