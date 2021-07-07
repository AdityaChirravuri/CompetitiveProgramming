#include<stdio.h>
#include<ctype.h>

int main()
{
  char text[10000];
  int beg, mid, end, len= 0;

  gets(text);

  while (text[len] != '\0')
    len++;

  end = len - 1;
  mid = len/2;

  for (beg = 0; beg < mid ; beg++)
  {
    if (text[beg] != text[end])
    {
      printf("NO");
      break;
    }
    end--;
  }
  if (beg == mid)
    printf("YES");
}
