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
    bool f=true;
    if(m==n)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
              if(i==j)
              {
                if(ar[i][j]!=1)
                {
                    f=false;
                }
              }     
              else if(i+j==n-1)
              {
                if(ar[i][j]!=1)
                {
                    f=false;
                }
              }
             else
             {
                if(i!=j||i+j!=n-1)
                {
                    if(ar[i][j]!=0)
                    {
                        f=false;
                    }
                }

             }
                    
             
            }
        }
    }
    else
    {
        f=false;
    }
    if(f)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }



    return 0;
}