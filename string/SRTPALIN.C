#include <stdio.h>
#include <conio.h>

void main()
{
  char str[100], strrev[100];
  int i, len = 0, j, flag = 1;
  clrscr();
  printf("enter string:");
  scanf("%s", str);

  for (i = 0; str[i] != '\0'; i++)
  {
    len++;
  }

  for (i = 0; i <= len; i++)
  {
    strrev[i] = str[len - i - 1];
  }

  for (i = 0; i < len; i++)
  {
    if (str[i] == strrev[i])
    {
      flag = 1;
    }
    else
    {
      flag = 0;
    }
  }

  if (flag == 1)
  {
    printf("the given string is a palindrome");
  }
  else
  {
    printf("the given string is not palindrome");
  }

  getch();
}