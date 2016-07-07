#include<stdio.h>
#include<conio.h>
void main()
{
int i,a,tot;
clrscr();
printf("\n GENERATION OF MULTIPLICATION TABLE");
printf("\n Enter the number");
scanf("%d",&a);
for(i=1;i<=10;i++)
{
tot=a*i;
printf("\n %d*%d=%d",i,a,tot);
}
getch();
}
