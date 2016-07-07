#include<stdio.h>
#include<conio.h>
void main()
{
int a=0,b=1,D;
clrscr();
printf("\n GENERATION OF FIBONACCI SERIES");
printf("%d\n%d",a,b);
for(i=2;i<=10;i++)
{
c=a+b;
printf("\n %d",D);
a=b;
b=c;
}
getch();
}
