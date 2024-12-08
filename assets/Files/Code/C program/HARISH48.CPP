#include<stdio.h>
#include<string.h>
void main()
{
int n1,n2,n;
char name1[20],name2[20],name3[20],name4[20];
clrscr();
printf("Enter two strings\n");
scanf("%s %s",name1,name2);
n1=strlen(name1);
n2=strlen(name2);
printf("\nLength of string %s is %d",name1,n1);
printf("\nLength of string %s is %d",name2,n2);
n=strcmp(name1,name2);
if(n==0)
printf("\nTwo strings are equal");
else if(n>=0)
printf("\nFrist string is greater than the second string");
else
printf("\nSecond string is greater than the frist string");
strcpy(name3,name1);
strrev(name1);
strcpy(name4,name2);
strrev(name2);
printf("\nReversed string of %s is %s",name3,name1);
printf("\nReversed string of %s is %s",name4,name2);
getch();
}

