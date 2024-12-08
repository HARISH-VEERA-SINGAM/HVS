#include<stdio.h>
#include<conio.h>
void main()
{
int n,i;
clrscr();
printf("Enter a namber:");
scanf("%d",&n);
printf("multiplication table of %d:\n",n);
for(i=1;i<=10;i++)
printf("%d*%d=%d\n",i,n,n*i);
getch();
}