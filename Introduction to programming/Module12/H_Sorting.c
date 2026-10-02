#include<stdio.h>
#include<math.h>
void sort(int n)
{
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(ar[i]<ar[j])
            {

            }
            else
            {
                int temp=ar[i];
                ar[i]=ar[j];
                ar[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",ar[i]);
    }

}
int main(){

    int n;
    scanf("%d",&n);
    sort(n);
    return 0;
}