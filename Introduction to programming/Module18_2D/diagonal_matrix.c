#include<stdio.h>
#include<math.h>
int main(){

      int r,c;
    scanf("%d%d",&r,&c);
    int a[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int f=1;
      for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(a[i][j]!=0)
            {
                f=0;
                break;
            }
           
        }
    }
    if(f)
    {
        printf("This is a zero matrix.\n");
    }
    else
    {
        printf("This is not a zero matrix.\n");
    }
   
    return 0;
}