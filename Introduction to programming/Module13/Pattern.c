#include <stdio.h>
#include <math.h>
int main()
{

    int n;
    scanf("%d", &n);
    int hash = 1;
    int bar = 0;
    int space = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }

        if (i % 2 == 1)
        {
            for (int j = 1; j <= hash; j++)
            {
                printf("#");
            }
        }
        else
        {

            for (int j = 1; j <= bar; j++)
            {
                printf("-");
            }
        }
        printf("\n");
        space--;
        hash = i * 2 + 1;
        bar = i * 2 + 1;
    }
   
    space = 1;
    for (int i = n-1; i >= 1; i--)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }

        hash = i * 2 - 1;
        bar = i * 2 - 1;
        if (i % 2 == 1)
        {
            for (int j = 1; j <= hash; j++)
            {
                printf("#");
            }
        }
        else
        {

            for (int j = 1; j <= bar; j++)
            {
                printf("-");
            }
        }
        printf("\n");
        space++;
       
    }
    return 0;
}