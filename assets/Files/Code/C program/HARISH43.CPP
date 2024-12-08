#include<stdio.h>
void main()
{
float P,V,I,R;
clrscr();
printf("Enter the values of V,Iand R\n");
scanf("%f %f %f",&V,&I,&R);
P=V*I;
printf("\nPower using Voltage and Current is %8.2f W",P);
P=(V*V)/R;
printf("\nPower using Voltage and Resistance is %8.2f W",P);
P=I*I*R;
printf("\nPower using Current and Resistance is %8.2f W",P);
getch();
}