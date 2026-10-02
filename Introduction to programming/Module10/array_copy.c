#include<stdio.h>
#include<math.h>
int main(){

    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    int m;
    scanf("%d",&m);
    int b[m];
    for(int i=0;i<m;i++)
    {
    scanf("%d",&b[i]);
    }
    int c[m+n];
    // for(int i=0;i<n;i++)
    // {
    // c[i]=a[i];
    // }
    // for(int i=n;i<m+n;i++)
    // {
    // c[i]=b[i-n];
    // }
    for(int i=0;i<m+n;i++)
    {
        if(i<n)
        {
            c[i]=a[i];
        }
        else
        {
            c[i]=b[i-n];
        }
    }
    for(int i=0;i<m+n;i++)
    {
        printf("%d ",c[i]);
    }
    return 0;
}