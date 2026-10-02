#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
bool isbalance(int r)
{
  char s[1000];

  sprintf(s, "%d", r); // integer to string convert
  int even = 0, odd = 0;
  for (int i = 0; i < strlen(s); i++)
  {
    if ((s[i] - '0') % 2 == 0)
    {
      even++;
    }
    else
    {
      odd++;
    }
  }
  if ((even == odd))
  {
    return true;
  }
  else
    return false;
}
int main()
{

  int r, l;
  scanf("%d%d", &r, &l);
  bool found = false;

  while (r <= l)
  {
    if (isbalance(r))
    {
      printf("%d\n", r);
      found = true;
    }

    r++;
  }
  if (!found)
  {
    printf("-1\n");
  }

  return 0;
}