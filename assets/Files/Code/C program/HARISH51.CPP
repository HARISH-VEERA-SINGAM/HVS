#include<stdio.h>
#include<conio.h>
void main()
{
float V,I,R;
clrscr();
printf("Enter the value of current I\n");
scanf("%f",&I);
printf("Enter the value of resistance R\n");
scanf("%f",&R);
V=I*R;
printf("According to ohm's Law, V is %8.2fV",V);
printf("\n\nEnter the value of resistance R\n");
scanf("%f",&V);
printf("Enter the value of resistance R\n");
scanf("%f",&R);
I=V/R;
printf("According to Ohm's Law,I is %8.2fA",I);
printf("\n\nEnter the value of voltage V\n");
scanf("%f",&V);
printf("Enter the value of current I\n");
scanf("%f",&I);
R=V/I;
printf("According to Ohm, R is %8.2f Ohm",R);
getch();
}
