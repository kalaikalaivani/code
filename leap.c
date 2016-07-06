#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("\n NUMBER IS LEAPYEAR OR NOT");
printf("\n Enter the year:");
scanf("%d",&n);
if(n%4==0)
{
 printf("\n GIVEN YEAR IS LEAPYEAR");
 
 }
 else
 {
 printf("\n GIVEN YEAR IS NOT A LEAPYEAR ");
 }
 getch();
 }
