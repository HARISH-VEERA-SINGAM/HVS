#include<stdio.h>
#include<conio.h>
void main()
{
int i,a[10];
clrscr();
printf("Enter 10 numbers one by one\n");
for(i=0;i<10;i++)
scanf("%d",&a[i]);
printf("\nThe entered numbers are\n");
for(i=0;i<10;i++)
printf("%d",a[i]);
getch();
}