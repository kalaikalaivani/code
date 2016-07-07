#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,temp;
clrscr();
printf("\n SWAP OF TWO NUMBERS");
printf("\n Enter two numbers");
scanf("%d%d",a,b);
temp=a;
a=b;
b=temp;
printf("\n AFTER SWAPPING");
printf("%d%d"a,b);
getch();
}
