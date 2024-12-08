#include<stdio.h>
#include<math.h>
#define KE 8.9875E9
void main()
{
double q1,q2,r,F;
double force(double,double,double);
clrscr();
printf("Enter the value of magnitude q1\n");
scanf("%1f",&q1);
printf("\nEnter the value of magnitude q2\n");
scanf("%1f",&q2);
printf("Enter the distance r\n");
scanf("1f",&r);
F=force(q1,q2,r);
printf("\nElectrostatic force according to coulomb's Law is %ifN",F);
getch();
}
double force(double d1,double d2,double dist)
{
double F1;
F1=KE*fabs(d1*d2)/(dist*dist);
return(F1);
}