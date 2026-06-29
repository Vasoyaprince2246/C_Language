/*
     aurhor:prince
      doc :25-06-2026
      sub:switch
*/
#include<stdio.h>
#include<conio.h>
void main(){

int choise;

clrscr();
printf("1 .Gujrati \n2 .Chainish \n3 .Punjabi \n4 .Maxicon dish \n5 .Etalian dish");
printf("\nenter your choise:");
scanf("%d",&choise);
switch(choise){
 case 1:printf("gujrati dish");
 break;
  case 2:printf("Chainish dish");
 break;
  case 3:printf(" Punjabi dish");
 break;
  case 4:printf("Maxicon dish");
 break;
  case 5:printf("Etalian dish");
 break;
 default :printf("enter valid choise ");

}
getch();

}