#include <stdio.h>
#include <conio.h>

void add(int a, int b);
void sub(int a, int b);
void mul(int a, int b);
void div(int a, int b);
void mod(int a, int b);

void main()
{
	int choice, a, b;

	clrscr();
	while (1)
	{
		printf("\n\nInput/output");
		printf("\nPress 1 for +");
		printf("\nPress 2 for -");
		printf("\nPress 3 for *");
		printf("\nPress 4 for /");
		printf("\nPress 5 for %");
		printf("\nPress 0 for the exit");

		printf("\n\nEnter your choice:");
		scanf("%d", &choice);

		switch (choice)
		{

		case 1:
			printf("enter the first number:");
			scanf("%d", &a);
			printf("enter the second number:");
			scanf("%d", &b);
			add(a, b);
			break;
		case 2:
			printf("enter the first number:");
			scanf("%d", &a);
			printf("enter the second number:");
			scanf("%d", &b);
			sub(a, b);
			break;
		case 3:
			printf("enter the first number:");
			scanf("%d", &a);
			printf("enter the second number:");
			scanf("%d", &b);

			mul(a, b);
			break;
		case 4:
			printf("enter the first number:");
			scanf("%d", &a);
			printf("enter the second number:");
			scanf("%d", &b);

			div(a, b);
			break;
		case 5:
			printf("enter the first number:");
			scanf("%d", &a);
			printf("enter the second number:");
			scanf("%d", &b);

			mod(a, b);
			break;
		case 0:
			exit();
			break;
		default:
			printf("enter valid number");
			break;
		}
	}
	getch();
}

void add(int a, int b)
{
	printf("addition is a %d and %d of: %d", a, b, a + b);
}
void sub(int a, int b)
{
	printf("subtraction is a %d and %d of: %d", a, b, a - b);
};
void mul(int a, int b)
{
	printf("multiplication is a %d and %d of: %d", a, b, a * b);
};
void div(int a, int b)
{
	printf("division is a %d and %d of: %d", a, b, a / b);
};
void mod(int a, int b)
{
	printf("modulo is a %d and %d of: %d", a, b, a % b);
};
