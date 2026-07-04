/*
  author:prince
   doc  :30-06-2026
   sub  :a to z
*/
#include<stdio.h>
#include<conio.h>

void main(){
 char a='a';
 clrscr();
 do{
 printf(" %c",a);
 a=a+4;
}while(a<='z');
getch();
}