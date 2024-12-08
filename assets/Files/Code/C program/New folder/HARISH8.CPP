#include<stdio.h>
#include<conio.h>
int main()
{
int fact(int);
int num,f;
clrscr();
printf("Enter amount\n");
scanf("%d",&num);
f=fact(num);
printf("Factorial of %d is %d",num,f);
getch();
return();
}
int fact(int n)
{
if (n==1)
return 1;else
return (n*fact(n-1));
}