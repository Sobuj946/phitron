#include<stdio.h>
#include<math.h>
#include<stdbool.h>
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
    for(int i=0;i<m;i++)
    {
        printf("%d ",ar[n-1][i]);
    }
    printf("\n");
     for(int i=0;i<n;i++)
    {
        printf("%d ",ar[i][m-1]);
    }
  
    return 0;
}