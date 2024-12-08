#include<stdio.h>
#include<math.h>
void main()
{
int x,y;
float p,sr;
clrscr();
printf("Enter the value of x and y\n");
scanf("%d %d",&x,&y);
p=pow(x,y);
sr=sqrt(x);
printf("\n%d power %d is %8.2f",x,y,p);
printf("\nSquare root of %d is %8.2f",x,sr);
getch();
}
