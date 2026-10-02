#include<stdio.h>
#include<math.h>
void small_to_capital(char ch)
{
    if(ch>='a'&&ch<='z')
    {
        printf("%c",toupper(ch));
    }
}
int main(){

    char ch;
    scanf("%c",&ch);
    small_to_capital(ch);
    return 0;
}