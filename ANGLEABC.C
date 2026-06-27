/*   author: prince
       doc:22-06-2026
       sub :angle find
       */
#include<stdio.h>
#include<conio.h>

void main(){

int a,b,c;
clrscr();

printf("enter angle a: ");
scanf("%d",&a);
printf("enter angle b: ");
scanf("%d",&b);

c=180-a-b;
printf("angle c is :%d",c);
getch();
}
