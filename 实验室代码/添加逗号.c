#include <stdio.h>
#include <string.h>
int main() {
    char n[100];
    int m = 0;
    scanf("%s",n);
    int len = 0;
    len = (int)strlen(n);
    int time = len / 3;
    time = time -1;
    int first = len % 3;
    for (int i = 0;i < first; i++){
        printf("%c",n[i]);
    }
    printf(",");
    for (int i = first; i < len ; i++){
        printf("%c",n[i]);
        m++;
        if (m == 3){
            printf(",");
            m  = 0;
        }
        
    }
/*    for (int i = time * 3 + 1;i < len ; i++){
        printf("%c",n[i]);
    }*/
    return 0;
}