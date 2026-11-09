#include <stdio.h>
#include <string.h>
char s[2100];
int main() {
    int n;
    scanf("%d",&n);
//    char s[n];
    int m[1];
    m[0] = 0;
    char S[1];
    int i;
    for (i = 0; i < n ; i++){
        m[0] = i;
        S[0] = (char)('0' + m[0]);
        strcat(s,S);
    }
//    char s[] = (char)m;
    printf("%c",s[n]);
    return 0;
}