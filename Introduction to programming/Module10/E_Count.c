#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){

    char s[1000001];
    scanf("%s",s);
    long long int sum=0;
    for(int i=0;i<strlen(s);i++)
    {
        sum+=(s[i]-'0');
    }
    printf("%lld\n",sum);
    return 0;
}