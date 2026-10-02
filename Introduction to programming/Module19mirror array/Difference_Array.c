#include <stdio.h>
#include <math.h>
int main()
{

    int t;
    scanf("%d",&t);
    while(t--)
    {
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int b[n];
     for (int i = 0; i < n; i++)
    {
        b[i] = ar[i];
    }
    for(int i=0;i<n;i++)
    {for(int j=i+1;j<n;j++)
        {
    {
        if (ar[i] < ar[j])
        {
        }
        else
        {
            int temp = ar[i];
            ar[i] = ar[j];
            ar[j] = temp;
        }
        
    }
}}
   
    int c[n];
    for (int i = 0; i < n; i++)
    {
       c[i]=b[i]-ar[i];
    }
      for (int i = 0; i < n; i++)
    {
       printf("%d ",abs(c[i]));
    }
    printf("\n");
}
    return 0;
}