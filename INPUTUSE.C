/*      author :prince
	  doc  :22-06-2026
	  sub  :user input
	  */
#include<stdio.h>
#include<conio.h>

void main(){
int n1,n2;
float n3,n4,n5;
char n6,n7,n8,n9;
clrscr();

//int
printf("enter n1: ");
scanf("%d",&n1);
printf("your n1:%d",n1);
printf("\nenter n2: ");
scanf("%d",&n2);
printf("your n2:%d",n2);

//float
printf("\n\nenter float value n3:");
scanf("%f",&n3);
printf("enter float  n4:");
scanf("%f",&n4);
printf("enter float value n5:");
scanf("%f",&n5);
printf("\nyour float value:%f",n3);
printf("\nyour float value :%f",n4);
printf("\nyour float valure :%f",n5);

//char

printf("\n\nenter char:");
scanf(" %c",&n6);
printf("your char n6:%c",n6);
printf("\nenter char:");
scanf(" %c",&n7);
printf("your char n7:%c",n7);

getch();
}