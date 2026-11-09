#include <stdio.h>


int main(void) {
    long long a,b;
    long long original;
    long long reversed1 = 0;
    long long reversed2 = 0;

    scanf("%lld", &a);
    if ( a != 1) {
        return 1;
    }
    b = a*a;
    while (a > 0) {
        reversed1 = reversed1 * 10 + a % 10;
        a /= 10;
    }
    while (b > 0) {
        reversed2 = reversed2 * 10 + b % 10;
        b /= 10;
    }


    if (is_palindrome(reversed1) && is_palindrome(reversed2)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
