#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d,e,sum;
float aver;
clrscr();
printf("Enter five numbers\n");
scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
sum=a+b+c+d+e;
aver=sum/5.0;
printf("\nSum of given five numbers = %d",sum);
printf("\nAverage of given five numbers = %8.2f",aver);
getch();
}
