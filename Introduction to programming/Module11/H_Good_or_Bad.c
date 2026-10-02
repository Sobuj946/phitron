#include<stdio.h>
#include<string.h>

int main() {
    int t;
    char temp[10];
    fgets(temp, sizeof(temp), stdin);
    sscanf(temp, "%d", &t); // Read t safely

    while (t--) {
        char s[100001];
        scanf("%s",s);
        // fgets(s, sizeof(s), stdin);

        // // Remove newline if present
        // int len = strlen(s);
        // if (len > 0 && s[len-1] == '\n') {
        //     s[len-1] = '\0';
        //     len--;
        // }

        // int f = 0;
        // for (int i = 0; i < len - 2; i++) {
        //     if ((s[i] == '0' && s[i+1] == '1' && s[i+2] == '0') ||
        //         (s[i] == '1' && s[i+1] == '0' && s[i+2] == '1')) {
        //         f = 1;
        //         break;
        //     }
        // }

        if (strstr(s,"101")||strstr(s,"010")) {
            printf("Good\n");
        } else {
            printf("Bad\n");
        }
    }

    return 0;
}
