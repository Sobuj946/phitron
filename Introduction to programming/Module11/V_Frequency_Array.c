#include<stdio.h>
#include<math.h>
int main(){

    int a,b;
    scanf("%d%d",&a,&b);
    int ar[a];
   int  freq[100000]={0};
    for(int i=0;i<a;i++)
    {
        scanf("%d",&ar[i]);

    }
    for(int i=0;i<a;i++){
        freq[ar[i]]++;


    }
    for(int i=1;i<=b;i++)
    {

   printf("%d\n",freq[i]);     
    }
    return 0;
}