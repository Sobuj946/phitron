#include <stdio.h>
#include <math.h>
int main()
{

    int n;
    scanf("%d", &n);
    int count = 0;

    // for(int i=1;i<=n;i++)
    // {
    //     if(n%i==0)
    //     {
    //
    //         printf("%d ",i);
    //         count++;

    //     }
    // }
    // better
    // for(int i=2;i<n/2;i++)
    // {
    //     if(n%i==0)
    //     {

    //         printf("%d ",i);
    //         count++;

    //     }
    // }
    // more better
    for (int i = 1; i < sqrt(n); i++)
    {
        if (n % i == 0)
        {

            printf("%d ", i);
            if(i!=n/i)
            {
                printf("%d ",n/i);
            }
        }
        if(i==n/i)
        {
            count++;
        }
        else{
            count+=2;
        }

    }
    printf("\n");
    printf("%d", count);
    return 0;
}