 /*    author  :prince
	  doc  :22-06-2026
	  sub  :salary
	  */
 #include<stdio.h>
 #include<conio.h>

 void main(){

float salary,hra,da,ta;

clrscr();

printf("enter your salary:");
scanf("%f",&salary);
printf("enter your hra:");
scanf("%f",&hra);
printf("enter your da:");
scanf("%f",&da);
printf("enter your ta:");
scanf("%f",&ta);

salary=salary+(salary*hra/100)+(salary*da/100)+(salary*ta/100);

printf("your salary final is:%f",salary);
getch();
}