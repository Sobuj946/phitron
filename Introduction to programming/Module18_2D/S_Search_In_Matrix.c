#include<stdio.h>
#include<math.h>
int main(){

    int n,m;
    scanf("%d%d",&n,&m);
    int ar[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&ar[i][j]);
        }
    }
    int x;
    scanf("%d",&x);
    int f=0;
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
           if(ar[i][j]==x)
           {
            f=1;
            break;
           }
        }
    }
    if(f)
    {
    printf("will not take number\n");

    }
    else
    {
    printf("will take number\n");
    }
    return 0;
}