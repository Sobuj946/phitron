#include<stdio.h>
#include<math.h>
int main(){

    int r,c;
    printf("Enter row and colom:");
    scanf("%d%d",&r,&c);
    int a[r][c];
     int row;
     printf("Enter print the row number:\n");
    scanf("%d",&row);
    int cl;
     printf("Enter print the coloum number:\n");
    scanf("%d",&cl);
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
   
    //specific row print
    printf("specific row:\n");
        for(int j=0;j<c;j++)
        {
            printf("%d ",a[row][j]);
        }
        //specific coloum print
    printf("\nspecific coloum:\n");

     for(int j=0;j<r;j++)
        {
            printf("%d \n",a[j][cl]);
        }

    return 0;
}