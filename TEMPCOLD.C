/*
		author :prince
		doc    :23-06-2026
		sub    :temhigh
*/
#include<stdio.h>
#include<conio.h>
void main(){

int temp;
clrscr();
printf("enter tempture :");
scanf("%d",&temp);

if(15>temp){
printf("temp is very clod:%d",temp);
}
else if(15<=temp && temp<22){
printf("temp is cold :%d",temp);
}
  else if(22<=temp && temp<28){
printf("temp is warm :%d",temp);
}
  else if(28<=temp){
printf("temp is hot :%d",temp);
}



getch();
}