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
    if(c==r){
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i + j != r - 1)
            {
                if (a[i][j] != 0)
                {
                    f = 0;
                    printf("This matrix is not a secondary diagonal.\n");
                    break;
                }
            }
        }
        if (f)
        {
            printf("This is a a secondary diagonal matrix.\n");
        }
    }

}
    else
    {
        printf("This is not a a secondary diagonal matrix.\n");
    }
    return 0;
}