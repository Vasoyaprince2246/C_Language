 /*  author :prince
      doc   :24-06-2026
      sub   :leep year

 */

 #include<stdio.h>
 #include<conio.h>

 void main(){

 int year;
 clrscr();
 printf("enter year:");
 scanf("%d",&year);

 if(year%4==0){

     if(year%100==0){

	 if(year%400==0){
	      printf("this year is leap year :%d",year);
		  }
	else{
	printf("this not leap year");
	    }
	}
		else{
	printf("this  leap year :%d",year);
	    }

 }
 else{
	printf("this not leap year");
 }

 getch();
 }

