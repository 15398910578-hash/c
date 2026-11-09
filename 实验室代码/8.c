#include<stdio.h>
#include<math.h>
int main() {
    int n,a,b,c;
    scanf("%d",&n);
    a = 0;
    b = 0;
    c = sqrt(n);
    while(c >0) {
        a =a * 10 + c % 10;
        c = c/10;
    }
//    printf("%d",a);
    printf("%d %d %d\n",a,b,c);
    if (a == sqrt(n) ) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}