/*
   author :prince
    doc   :24-06-2026
    sub   :positive or negative
*/
#include<stdio.h>
#include<conio.h>

void main(){

int num;
clrscr();
printf("enter your number:");
scanf("%d",&num);

if(num>0){
printf("number is positive ");
}
else if(num==0){
printf("number is zero");
}
else{
printf("number is negative");
}
getch();
}