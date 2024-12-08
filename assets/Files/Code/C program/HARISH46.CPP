#include<stdio.h>
void main()
{
int choice;
float C1,C2,C3,ctot,tot_c_series,tot_c_par;
clrscr();
printf("Enter the capacitance values C1,C2 and C3\n");
scanf("%f %f %f",&C1,&C2,&C3);
printf("\nEnter your choice");
printf("\nEnter 1 for series");
printf("\nEnter 2 for parallel\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
ctot=1/C1+1/C2+1/C3;
tot_c_series=1/ctot;
printf("\nTotal capacitance in series is %8.2f",tot_c_series);
break;
case 2:
tot_c_par=C1+C2+C3;
printf("\nTotal capacitance in parallel is %8.2f",tot_c_par);
break;
}
getch();
}