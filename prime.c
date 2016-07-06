#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,count=0;
clrscr();
printf("\n enter the number:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
if(n%i==0)
count++;
}
if(count==2)
printf("\n Given number is prime number");
else
printf("\n Given number is not prime number");
getch();
}
