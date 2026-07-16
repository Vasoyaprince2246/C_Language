#include<stdio.h>
#include<conio.h>

void div(int b);

void main(){
int a;

clrscr();
	printf("enter the number:");
	scanf("%d",&a);
	div(a);
getch();
}

void div(int b){
  if(b%3==0 && b%5==0){
       printf("the number is 3 and 5 divided");
  }
  else{
      printf("the number is not divided 3 and 5");
  }
}