#include<stdio.h>
#include<conio.h>
void main()
{
int L=0;
char*P;
char name[20];
clrscr();
P=name;
printf("Enter the string\n");
gets (name);
while (*P!='\0')
{
L++;
P++;
}
printf("Length of string is %d",L);
getch();
}










