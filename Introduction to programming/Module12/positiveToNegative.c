#include <stdio.h>
#include <math.h>
void nTo_n(int n)
{
    if (n > 0)
    {
        for (int i = n; i >= -n; i--)
        {
            printf("%d ", i);
        }
    }
    else
    {
        for (int i = -n; i <= n; i++)
        {
            printf("%d ", i);
        }
    }
}
// void negative_n_print(int n)
// {
//     for(int i=-n;i<=n;i++)
//     {
//         printf("%d ",i);
//     }
// }
int main()
{

    int n;
    scanf("%d", &n);
    nTo_n(n);

    return 0;
}