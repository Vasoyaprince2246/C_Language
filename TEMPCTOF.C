       /* author :prince
	     doc: 22-06-2026
	     sub: temp
	     */
#include<stdio.h>
#include<conio.h>

void main(){

int tempc;
float tempf;

clrscr();
printf("enter temp c: ");
scanf("%d",&tempc);
tempf=((float)tempc*9/5)+32;

printf("tempf is a :%f",tempf);
getch();
}