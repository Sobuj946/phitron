#include<stdio.h>
#include<math.h>
void print_even_ind(int ar[],int n,int i)
{
    if(i==n)
    {
        return;
    }
    print_even_ind(ar,n,i+1);
    if(i%2==0)
    {
        printf("%d ",ar[i]);
    }
}
int main(){

    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
    scanf("%d",&ar[i]);
    }
    print_even_ind(ar,n,0);
    return 0;
}