#include <stdio.h>
#include <math.h>
int main()
{

    char s[10001];
    scanf("%s", s);
    int f[26] = {0};
    for (int i = 0; s[i] != '\0'; i++)
    {
        int index;
        index = s[i] - 'a';
        f[index]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (f[i] != 0)
        {
            printf("%c - %d\n", i + 'a', f[i]);
        }
    }
    return 0;
}