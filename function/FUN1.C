#include<stdio.h>
#include<conio.h>

void cube(int b);

void main(){
int a;
 clrscr();
	printf("enter the value:");
	scanf("%d",&a);
	cube(a);
 getch();
}

void cube(int b){
printf("cube is :%d",b*b*b);

}