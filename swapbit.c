#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("\n SWAP OF TWO NUMBERS");
printf("\n Enter two numbers");
scanf("%d%d",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("\n AFTER SWAPPING");
printf("%d%d"a,b);
getch();
}
