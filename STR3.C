#include<stdio.h>
#include<conio.h>

void main(){
 int i;
 char str[100];
 clrscr();

	printf("enter string: ");
	scanf("%s",str);

	for(i=0;str[i]!='\0';i++){
	     if('a'<=str[i] && str[i]<='z'){
		    str[i]=str[i]-32;
	     }
	     else if('A'<=str[i] && 'z'>=str[i]){
		    str[i]=str[i]+32;
	     }
	}


	printf("the string is:%s",str);
 getch();
}