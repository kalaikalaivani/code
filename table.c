#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,t;
clrscr();
printf("\n MULTIPLICATION TABLE");
printf("\n Enter the number");
scanf("%d",&n);
for(i=1;i<=10;i++)
{
t=n*i;
printf("\n %d*%d=%d",i,n,t);
}
getch();
}
