#include <stdio.h>
#include <math.h>
long long solve(int ar[], int n, int i)
{

    if (i == n)

        return 0;

    return ar[i] + solve(ar, n, i + 1);
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
    long long sum = solve(ar, n, 0);
    printf("%lld\n", sum);

    return 0;
}