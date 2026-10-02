#include <stdio.h>
#include <math.h>
#include <limits.h>
int main()
{

    int n, k;
    scanf("%d%d", &n, &k);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (ar[i] > ar[j])
            {
                int temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }
    }

    int i = 0, j = n - 1;
    int cnt = 0;
    int max = INT_MIN;
    while (i < j)
    {
        int sum = ar[i] + ar[j];
        if (sum <= k)
        {
            cnt++;
            i++;
            j--;
        }
        else
        {
            j--;
        }
      
    }

    printf("%d\n", cnt);
    return 0;
}