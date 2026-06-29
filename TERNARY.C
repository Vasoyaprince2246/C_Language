    /*
    author:prince
    doc   :26-06-2026
    sub   :ternary
    */

#include<stdio.h>
#include<conio.h>
void main(){
    int n,m;
    clrscr();
    printf("enter number m :");
    scanf("%d",&m);

n=(m>0)?1:(m<0)?-1:0;
printf("%d",n);
    getch();
}