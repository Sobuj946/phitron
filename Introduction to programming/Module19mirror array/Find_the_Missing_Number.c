#include<stdio.h>
#include<math.h>
int main(){

    int t;
    scanf("%d",&t);
    while (t--)
    {
        long long int m,a,b,c;
        scanf("%lld%lld%lld%lld",&m,&a,&b,&c);
        long long int mul=a*1ll*b*c;
        if(m%a==0&&m%b==0&&m%c==0&&m%mul==0)
        {
            printf("%lld\n",m/mul);
        }
        else
        {
            printf("-1\n");
        }
    }
    
    return 0;
}