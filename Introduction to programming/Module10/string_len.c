#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){

    char ch[20];
    fgets(ch,20,stdin);
    int count=0;
    int i=0;
    while(ch[i]!='\0')
    {
        count++;
        i++;
    }
    printf("%d\n",count);
    printf("%d",strlen(ch));
    return 0;
}