/*
  author :prince
  doc    :01-07-2026
  suc 	 :patten
*/
#include<stdio.h>
#include<conio.h>

void main(){
char  i,j;
char  n;
int k;


clrscr();
printf("enter number:");
scanf("%c",&n);

for(i='A';i<=n;i++){
     for(k=1;k<=n-i;k++){
     printf(" ");

     }
     for(j='A';j<=i;j++){
     printf("%c",j);

     }
     printf("\n");
}
	       getch();
}