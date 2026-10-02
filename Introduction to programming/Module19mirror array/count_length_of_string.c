#include<stdio.h>
#include<math.h>
int count(char s[], int i)
{
    int len=strlen(s);
    if(i==len)
    {
        return 0;

    }
    return 1+count(s,i+1);

}
int main(){

    char s[1000];
    fgets(s,1000,stdin);
  int c=  count(s,0);
  printf("%d\n",c);
    return 0;
}