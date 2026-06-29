/*
    author :prince
    doc    :24-06-2026
    sub    :even or odd
*/
#include<stdio.h>
#include<conio.h>

void main(){
  int num;
  clrscr();

  printf("enter number :");
  scanf("%d",&num);

  if(num%2==0){
  printf("number is even");
  }
  else{
  printf("number is odd");
  }
  getch();

}