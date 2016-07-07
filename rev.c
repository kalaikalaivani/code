#include<stdio.h>
#include<conio.h>
void main()
{
int s,s1;
printf("\n enter the number");
scanf("%d",&s);
s1=strrev(s);
if(s==s1)
printf("\n given number is palindrome");
else
printf("\n not a palindrome");
getch();
}
