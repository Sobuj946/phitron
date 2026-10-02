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
    int index;
    scanf("%d",&index);
    for(int i=index;i<n;i++)
    {
        ar[i]=ar[i+1];
    }
    n--;
    for(int i=0;i<n;i++)
    {
        printf("%d ",ar[i]);
    }
    
    return 0;
}