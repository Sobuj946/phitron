#include <stdio.h>
#include <math.h>
int main()
{

    int r, c;
    scanf("%d%d", &r, &c);
    int a[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int f = 1;
    if (r == c)
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (  i != j&&a[i][j] != 0)
                {
                    f = 0;
                    break;
                }
            }
        }
    }
    else
    {
        printf("This matrix is not diagonal\n");
        
    }

    if(f)
    {
        printf("This matrix is diagonal\n");
    }
    else
    {
        printf("This matrix is not diagonal\n");
    }
    return 0;
}