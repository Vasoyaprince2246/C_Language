/*
   author:prince

   doc   :25-06-2026
   sub   :starbug
*/

#include<stdio.h>
#include<conio.h>
void main(){

int choice,q,s;

clrscr();
printf("\t\t\t---------");
printf("\n\t\t\t|welcome|");
printf("\n\t\t\t---------");
printf("\n1.Coffe");
printf("\n2.Tea");
printf("\n3.Milk");
printf("\n4.Juice");
printf("\n5.Water");
printf("\n6.Soda");
printf("\n\n\t\t Enter your choice: ");
scanf("%d",&choice);

switch(choice){
   case 1:printf(" coffee:");
       printf("\n\n1.Cappuccion\n2.Latte\n3.Espresso\n4.Americano\n5.Mocha");
       printf("\n\nenter choice coffee:");
       scanf("%d",&choice);


	switch(choice){
	case 1:printf("\nCappuccion");
	       printf("\nenter quntity:");
	       scanf("%d",&q);
	       printf("\n\n Bill is :%d",100*q);
	       break;
	case 2:printf("\nLatte");
	       printf("\nenter quntity:");
	       scanf("%d",&q);
	       printf("\n\n Bill is :%d",200*q);
	       break;
	case 3:printf("\nEspresso");
	       printf("\nenter quntity:");
	       scanf("%d",&q);
	       printf("\n\n Bill is :%d",250*q);
	       break;
	case 4:printf("\nAmericano");
	       printf("\nenter quntity:");
	       scanf("%d",&q);
	       printf("\n\n Bill is :%d",300*q);
	       break;
	case 5:printf("\nMocha");
	       printf("\nenter quntity:");
	       scanf("%d",&q);
	       printf("\n\n Bill is :%d",350*q);
	       break;
	default :printf("enter valid choice");
	     }
	      break;
   case 2:printf("\nTea");
      printf("\n\n1.Green Tea\n2.Black Tea\n3.Herbal Tea\n4.Chai Tea\n5.Earl Grey Tea");          printf("\n\nenter your Tea:");
      scanf("%d",&choice);


	switch(choice){
	case 1:printf("\nGreen Tea");
	       printf("\nenter quntity:");
	       scanf("%d",&q);
	       printf("\n\n Bill is :%d",150*q);
	       break;
	case 2:printf("\nBlack Tea");
	       printf("\nenter quntity:");
	       scanf("%d",&q);
	       printf("\n\n Bill is :%d",220*q);
	       break;
	case 3:printf("\nHerbal Tea");
	       printf("\nenter quntity:");
	       scanf("%d",&q);
	       printf("\n\n Bill is :%d",290*q);
	       break;
	case 4:printf("\nChai Tea");
	       printf("\nenter quntity:");
	       scanf("%d",&q);
	       printf("\n\n Bill is :%d",240*q);
	       break;
	case 5:printf("\nEarl Grey Tea");
	       printf("\nenter quntity:");
	       scanf("%d",&q);
	       printf("\n\n Bill is :%d",325*q);
	       break;
	default :printf("enter valid choice");
	     }

	      break;
   case 3:printf("Milk");
     printf("\n\n1.whole Milk\n2.skim nilk\n3.soy milk\n4.almod milk\n5.oat milk");
     printf("\nenter your Milk:");
     scanf("%d",&choice);

	switch(choice){
	case 1:printf("\nwhole Milk");
	       printf("\nenter quntity:");
	       scanf("%d",&q);
	       printf("\n\n Bill is :%d",150*q);
	       break;
	case 2:printf("\nskim nilk");
	       printf("\nenter quntity:");
	       scanf("%d",&q);
	       printf("\n\n Bill is :%d",220*q);
	       break;
	case 3:printf("\nsoy milk");
	       printf("\nenter quntity:");
	       scanf("%d",&q);
	       printf("\n\n Bill is :%d",290*q);
	       break;
	case 4:printf("\nalmod milk");
	       printf("\nenter quntity:");
	       scanf("%d",&q);
	       printf("\n\n Bill is :%d",240*q);
	       break;
	case 5:printf("\noat milk");
	       printf("\nenter quntity:");
	       scanf("%d",&q);
	       printf("\n\n Bill is :%d",325*q);
	       break;
	default :printf("enter valid choice");
	     }

	      break;
   case 4:printf("juice");
     printf("\n\n1.orange juice\n2.apple juice\n3.cranberry juice\n4.pineapple juice\n5.graphapple juice");
     printf("\nenter your Milk:");
     scanf("%d",&choice);

	switch(choice){
	case 1:printf("\norange juice");
	       printf("\nenter quntity:");
	       scanf("%d",&q);
	       printf("\n\n Bill is :%d",150*q);
	       break;
	case 2:printf("\napple juice");
	       printf("\nenter quntity:");
	       scanf("%d",&q);
	       printf("\n\n Bill is :%d",220*q);
	       break;
	case 3:printf("\ncranberry juice");
	       printf("\nenter quntity:");
	       scanf("%d",&q);
	       printf("\n\n Bill is :%d",290*q);
	       break;
	case 4:printf("\npineapple juice");
	       printf("\nenter quntity:");
	       scanf("%d",&q);
	       printf("\n\n Bill is :%d",240*q);
	       break;
	case 5:printf("\ngraphapple juice");
	       printf("\nenter quntity:");
	       scanf("%d",&q);
	       printf("\n\n Bill is :%d",325*q);
	       break;
	default :printf("enter valid choice");
	     }

	      break;
   case 5:printf("water");
     printf("\n\n1.still water\n2.sparking water\n3.flavored water\n4.mineral water\n5.infused water");
     printf("\nenter your water:");
     scanf("%d",&choice);

	switch(choice){
	case 1:printf("\nstill watrer");
	       printf("\nenter quntity:");
	       scanf("%d",&q);
	       printf("\n\n Bill is :%d",150*q);
	       break;
	case 2:printf("\nsparking water");
	       printf("\nenter quntity:");
	       scanf("%d",&q);
	       printf("\n\n Bill is :%d",220*q);
	       break;
	case 3:printf("\nflavored water");
	       printf("\nenter quntity:");
	       scanf("%d",&q);
	       printf("\n\n Bill is :%d",290*q);
	       break;
	case 4:printf("\nmineral water");
	       printf("\nenter quntity:");
	       scanf("%d",&q);
	       printf("\n\n Bill is :%d",240*q);
	       break;
	case 5:printf("\infused water");
	       printf("\nenter quntity:");
	       scanf("%d",&q);
	       printf("\n\n Bill is :%d",325*q);
	       break;
	default :printf("enter valid choice");
	     }

	      break;
   case 6:printf("soda");
     printf("\n\n1.cola soda\n2.lemon soda\n3.girger soda\n4.root soda\n5.orange soda");
     printf("\nenter your soda:");
     scanf("%d",&choice);

	switch(choice){
	case 1:printf("\ncola soda ");
	       printf("\nenter quntity:");
	       scanf("%d",&q);
	       printf("\n\n Bill is :%d",150*q);
	       break;
	case 2:printf("\nlemon soda");
	       printf("\nenter quntity:");
	       scanf("%d",&q);
	       printf("\n\n Bill is :%d",220*q);
	       break;
	case 3:printf("\ngirger soda");
	       printf("\nenter quntity:");
	       scanf("%d",&q);
	       printf("\n\n Bill is :%d",290*q);
	       break;
	case 4:printf("\nroot soda");
	       printf("\nenter quntity:");
	       scanf("%d",&q);
	       printf("\n\n Bill is :%d",240*q);
	       break;
	case 5:printf("\norange soda");
	       printf("\nenter quntity:");
	       scanf("%d",&q);
	       printf("\n\n Bill is :%d",325*q);
	       break;
	default :printf("enter valid choice");
	     }

	      break;
   default :printf("enter valid choice");


}
	 printf("\n\t\t\t-----------");
	 printf("\n\t\t\t|thank you|");
	 printf("\n\t\t\t-----------");
getch();
}