#include<stdio.h>
#include<conio.h>
void main()
{
char c;
clrscr();
printf("\n Enter the character:");
scanf("%c",&c);
if(c=='a'||c=='e'||c=='i||c=='o'||c=='u')
{
printf("\n Given character is vowels");
}
else
{
printf("\n Given character is consonants");
}
getch();
}
