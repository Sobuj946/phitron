#include<stdio.h>
#include<stdbool.h>
#include<math.h>
int main(){

    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int i=0,j=n-1;
    bool f=true;
    while(i<j)
    {
       if(ar[i]!=ar[j])
       {
        printf("NO\n");
        return 0;
       }
       i++;
       j--;
    }
   
        printf("YES\n");

  
    return 0;
}