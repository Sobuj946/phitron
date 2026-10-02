#include<stdio.h>
#include<math.h>
int main(){

    int t;
    scanf("%d",&t);
    while(t--)
    {
        int m1,m2,d;
        scanf("%d%d%d",&m1,&m2,&d);
        int days=d*m1/(m1+m2);
        printf("%d\n",d-days);
    }
    return 0;
}