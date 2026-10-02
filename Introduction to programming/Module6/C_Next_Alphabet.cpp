#include <stdio.h>
int main()
{
    char ch;
    scanf("%c", &ch);
    if ((ch >= 'a' && ch <= 'z'))
    {

        if (ch == 'z')
        {
            ch = 'a';
            printf("%c\n", ch);
        }
        else
        {
            printf("%c\n", ch + 1);
        }
    }
}