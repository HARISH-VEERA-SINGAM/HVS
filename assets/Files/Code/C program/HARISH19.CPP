#include<stdio.h>
struct student
{
int regno;
char name[20];
int mark[6];
int total;
float aver;
};
void main()
{
struct student s[70];
int n,i,j;
clrscr();
printf("\nEnter the number of students\n");
scanf("%d",&n);
for (i=0;i<n;i++)
{
printf("\nEnter the register number, name and six marks one by one\n");
scanf("%d %s",&s[i].regno,s[i].name);
for(j=0;j<6;j++)
{
scanf("%d",&s[i].mark[j]);
}
s[i].total=0;
for(j=0;j<6;j++)
{
s[i].total=s[i].total+s[i].mark[j];
}
s[i].aver=s[i].total/6.0;
printf("\n Total mark and average mark are \n");
printf("\n%d\t%s\t%d\t%8.2f\n",s[i].regno,s[i].name,s[i].total,s[i].aver);
}
getch();
}