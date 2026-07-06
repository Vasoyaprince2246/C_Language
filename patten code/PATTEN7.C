/*
   author:prince
   doc   :03-07-2026
   sub   :patten 7
*/
#include<stdio.h>
#include<conio.h>

void main(){
  int i;
  char ch,j;
  clrscr();
	  printf("enter charecter:");
	  scanf("%c",&ch);
	  for(i=65;i<=ch;i++){
	     for(j=i;j>='A';j--){
		    printf("%c",j);
	     }     j=j+i-64;
	     printf("\n");

	  }

  getch();
}