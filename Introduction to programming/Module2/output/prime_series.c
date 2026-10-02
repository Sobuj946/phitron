#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#define MX 100000
bool prime[MX];
void seive(int n)
{
   
    for(int i=0;i<=n;i++)
    {
        prime[i]=true;
    }
    prime[0]=prime[1]=false;
    for(int i=2;i*i<=n;i++)
    {
       if(prime[i]) {
        for(int j=i*i;j<=n;j+=i)
        {
            prime[j]=false;
        }
    }
    }
    for(int i=0;i<=n;i++)
    {
       if(prime[i])
       {
        printf("%d ",i);
       }
    }
}
int main(){

    int n;
    scanf("%d",&n);
    seive(n);
    return 0;
}