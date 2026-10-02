#include<stdio.h>
#include<math.h>
void capital_to_small(char ch)
{
    if(ch>='A'&&ch<='Z')
    {
        printf("%c",tolower(ch));
    }
}
int main(){

    char ch;
    scanf("%c",&ch);
    capital_to_small(ch);
    return 0;
}