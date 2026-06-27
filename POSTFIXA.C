   /* author:prince
       doc  :22-06-2026
       sub   :prefix and postfix
       */
#include<stdio.h>
#include<conio.h>

void main(){
int n1,a,n2,b,n3,c;
clrscr();


printf("enter value n1: ");
scanf("%d",&n1);

a=++n1 - n1++ + n1++ + --n1 + ++n1 + n1--;
printf("postfix and prifix  %d:",n1);
printf("\npostfix and prifix %d:",a);

printf("\n\nenter value n2: ");
scanf("%d",&n2);

b=++n2 + ++n2 + n2-- + n2++ - --n2 + n2++;
printf("postfix and prifix  %d:",n2);
printf("\npostfix and prifix %d:",b);

printf("\n\nenter value n3: ");
scanf("%d",&n3);

c=++n3 - ++n3 + n3++ + n3++ + n3 + n3--;
printf("postfix and prifix  %d:",n3);
printf("\npostfix and prifix %d:",c);
getch();
}