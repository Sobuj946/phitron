#include<stdio.h>
#include<math.h>
int main(){

    
    char a[100];
    char b[100];
    scanf("%s%s",&a,&b);
    int i=0;
    while(1)
    {
        if(a[i]=='\0'&&b[i]=='\0')
        {
            printf("Equal");
            break;
        }
        else if(a[i]=='\0')
        {
            printf("A is smaller");
            break;
        }
        else if(b[i]=='\0')
        {
            printf("B is smaller");
            break;
        }
        else if(a[i]>b[i])
        {
            printf("B is smaller");
            break;
        }
        else if(b[i]>a[i])
        {
            printf("A is smaller");
            break;
        }
        else if(a[i]==b[i])
        {
            i++;
        }
    }
    return 0;
}