#include <stdio.h>
#include <math.h>
void solve(int ar[], int n)
{
    int i = 0, j = n - 1;
    while (i <= j)
    {

        if (i == j)
        {

            printf("%d ", ar[j]);
        }
        else
        {
            printf("%d ", ar[i]);
            printf("%d ", ar[j]);
        }

        i++;

        j--;
    }
}
int main()
{

    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    solve(ar, n);
    return 0;
}