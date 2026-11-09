#include <stdio.h>
int main(void){
    long long n;

    while (scanf("%lld", &n) != EOF){
        if (n == 0){
            break;
        }

        if (n <= 75){
            printf("AOLIGEI!\n");
        }
        else{
            printf("DAAAAAMN!\n");
        }
    }

    return 0;
}
