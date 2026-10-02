#include<stdio.h>
#include<math.h>
int main(){

    int n;
    scanf("%d",&n);
    int ar[n];
    int index,value;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
  
    scanf("%d",&index);
    scanf("%d",&value);
    if(index<n)
    {
       ar[index]=value;
       for(int i=n-1;i>=0;i--)
       {
           printf("%d ",ar[i]);
       }
    }
   
    return 0;
}