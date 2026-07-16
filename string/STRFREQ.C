#include <stdio.h>
#include <conio.h>

void main()
{
	int i, j, count = 0, len = 0;
	char str[100];
	clrscr();
	printf("enter string:");
	scanf("%s", str);

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}
	printf("Frequency of each latter");
	for (i = 0; i < len; i++)
	{
		for (j = 0; j < i; j++)
		{
			if (str[i] == str[j])
			{
				break;
			}
		}

		if (i == j)
		{
			for (j = 0; j < len; j++)
			{
				if (str[i] == str[j])
				{
					count++;
				}
			}
			printf("\n%c=>%d", str[i], count);
			count = 0;
		}
	}
	getch();
}