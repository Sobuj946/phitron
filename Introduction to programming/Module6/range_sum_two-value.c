#include <stdio.h>
#include <math.h>
int main()
{

    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, b;
        scanf("%d%d", &a, &b);
        int max=0, min=0;
        long long int sum = 0;
        if (a > b)
        {
            max = a;
            min = b;
        }
        else
        {
            max=b;
            min=a;
        }
        for(int i=min+1;i<max;i++)
        {
            if(i&1)
            {
                sum+=i;
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}