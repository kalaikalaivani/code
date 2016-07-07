#include<stdio.h>
#include<conio.h>
void main()
{
int a=0,b=1,c;
clrscr();
printf("\n FIBONACCI SERIES");
printf("%d\n%d",a,b);
for(i=2;i<=9;i++)
{
c=a+b;
printf("\n %d",c);
a=b;
b=c;
}
getch();
}
