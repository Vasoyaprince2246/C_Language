/*
   author:prince
     doc :02-07-2026
     sub :132 to sum first and last digit
*/
#include<stdio.h>
#include<conio.h>

void main(){

int n,sum=0,digit,flag=1;
clrscr();
printf("enter the number:");
scanf("%d",&n);

while(n>0){
 digit=n%10;
 if(flag==1||n/10==0){
  sum+=digit;

 }
 flag=0;
 n=n/10;

}
 printf("%d",sum);
     getch();
}
