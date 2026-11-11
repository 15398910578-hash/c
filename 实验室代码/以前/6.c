
#include <stdio.h>

int main(void) {
    int n;
    int i;

    if (scanf("%d", &n) != 1) {
        return 1;
    }

    for (i = 0; i < n; i++) {
        long long value;

        if (scanf("%lld", &value) != 1) {
            return 1;
        }

        if (i > 0) {
            printf(" ");
        }
        printf("%lld", value);
    }

    printf("\n");
    return 0;
}
