#include <stdio.h>
#include <string.h>
int main() {
    char n[100];
    int m = 0;
    scanf("%s",n);
    int len = 0;
    len = (int)strlen(n);
    int time = len / 3;
    if (len % 3 == 0){
        time = time -1;
    }
//    time = time -1;
    int first = len % 3;
    for (int i = 0; i < len ; i++){
        printf("%c",n[i]);
        m++;
        if (m == 3 && time != 0){
            printf(",");
            m  = 0;
            time --;
        }
        if (i == first-1 && first != 0 && time != 0){
            printf(",");
            time --;
            m =0;
        }
    }
/*    for (int i = time * 3 + 1;i < len ; i++){
        printf("%c",n[i]);
    }*/
    return 0;
}