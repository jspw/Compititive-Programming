#include<stdio.h>
#include<conio.h>
#include<math.h>
#define PI 3.1416
int main()
{
    int r,h,a,b,c,d;

    float area,rec_area,tri_area,sqr_area;

    printf("Enter the redias of circle:\n");

    scanf("%d",&r);

    area = PI * r * r ;

    printf("The area of the circle is : %.2f\n",area);

    printf("Enter height and base of triangle:\n");

    scanf("%d%d",&h,&a);

    tri_area = 1/2.0*a*h;

    printf("The area of the triangle is : %2.f\n",tri_area);

    printf("Enter one of the hand of the square :\n");

    scanf("%d",&b);

    sqr_area = b*b ;

    printf("The area of the square is : %.2f\n",sqr_area);

    printf("Enter length and width of the rectangle :\n");

    scanf("%d%d",&c,&d);

    rec_area = c*d;

    printf("The area of the rectangle is :%.2f\n",rec_area);

    getch();


}
