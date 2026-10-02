#include<stdio.h>
#include<math.h>
int char_to_ascii(char s)
{
    return s;
}
int main(){

    char ch;
    scanf("%c",&ch);
    int c=char_to_ascii(ch);
    printf("%d",c);
    return 0;
}