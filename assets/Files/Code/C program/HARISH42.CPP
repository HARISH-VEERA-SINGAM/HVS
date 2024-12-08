#include<stdio.h>
void main()
{
float R1,R2,R3,rtot,tot_r_series,tot_r_par;
clrscr();
printf("Enter three resistance values R1,R2 and R3\n");
scanf("%f %f %f",&R1,&R2,&R3);
tot_r_series=R1+R2+R3;
rtot=1.0/R1+1.0/R2+1.0/R3;
tot_r_par=1.0/rtot;
printf("\nTotal resistance in series is %8.2f Ohm",tot_r_series);
printf("\nTotal resistance in parallel is %8.2f Ohm",tot_r_par);
getch();
}
