#include<stdio.h>
#include<conio.h>
void main()
{
int s=0,d,n,n1;
clrscr();
printf("\n enter the number");
scanf("%d",&n);
n1=n;
while(n>0)
{
d=n%10;
s=s+d*d*d*;
n=n/10;
}
if(n==n1)
printf("given number is armstrong");
else
printf("given number is not an armstrong");
getch();
}
