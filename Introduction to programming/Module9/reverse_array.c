#include<stdio.h>
#include<math.h>
int main(){

    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    // int i=0,j=n-1;
    for(int i=0, j=n-1;i<j;i++,j--)
    // while(i<j)
    {
        
            int temp=ar[i];
            ar[i]=ar[j];
            ar[j]=temp;
        
        i++;j--;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",ar[i]);
    }
    return 0;
}