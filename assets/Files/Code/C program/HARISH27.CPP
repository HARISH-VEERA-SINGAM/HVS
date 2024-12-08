#include<stdio.h>
#include<conio.h>
void main()
{
char str[20];
char *ptr,*str1,temp;
int length=0,i;
clrscr();
printf("Enter a string\n");
scanf("%s",str);
//Finding length of a string
ptr=str;
while(*ptr!='\0')
{
length++;
ptr++;
}printf("\nLength of a given string %s is %d",str,length);
//Reversing a string
str1=str;
ptr--;
for(i=0;i<(length-1)/2;i++)
{
temp=*ptr;
*ptr=*str1;
*str1=temp;
ptr--;
str1++;
}
printf("\nThe reversed string is %s",str);
getch();
}