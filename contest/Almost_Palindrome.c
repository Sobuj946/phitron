#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char s[1001];
        scanf("%s", s);
        int len = strlen(s);
        int freq[26] = {0};
        for (int i = 0; i <= len - 1; i++)
        {
            freq[(s[i] - 'a')]++;
        }
        int Odd = 0;
        for (int i = 0; i < 26; i++)
        {
            if (freq[i] % 2 == 1)
            {
                Odd++;
            }
        }
        if (Odd <= 1)
        {
            printf("0\n");
        }
        else
        {
            printf("%d\n", Odd - 1);
        }
    }
    return 0;
}