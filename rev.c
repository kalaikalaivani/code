#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,rev,rem;
printf("\n enter the number");
scanf("%d",&n);
rev=0;
while(n>0)
{
  rem=n%10;
  rev=rev*10+rem;
  n=n/10;
  printf("reverse of number:%d",rev);
}
  getch();
}

