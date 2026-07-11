#include<stdio.h>
#include<conio.h>

void main(){
 int arr[100],i,l;
 clrscr();
 printf("enter size of array:");
 scanf("%d",&l);
 for(i=0;i<l;i++){
   printf("enter element[%d]:",i);
   scanf("%d",&arr[i]);

 }
 printf("\nnegative element is :");
 for(i=0;i<l;i++){
 if(arr[i]<0){
  printf(" %d ",arr[i]);
  }
 }
 getch();

}