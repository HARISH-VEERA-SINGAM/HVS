#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("Enter values for a and b\n");
scanf("%d%d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("swapping a&b values without using third variable c is %d\t%d\n",a,b);
getch();
}
