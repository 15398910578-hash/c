#include <stdio.h>

int maxsort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    return 0;
}

int minisort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (a[j] < a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    return 0;
}

int main(){
    int s[7000],x,i,q,a,n = 0;
    scanf("%d",&q);
    while (q--){
        scanf("%d",&a);
        if (a == 1){
            scanf("%d",&x);
            s[n] = x;
            n++;
        }else if (a == 2){
            s[n] = 0;
            n--;
        }else if (a == 3){
            scanf("%d",&i);
            printf("%d\n",s[i]);
        }else if (a == 4){
            scanf("%d %d",&i,&x);
            for (int j = n; j  >= i+1; j--){
                s[j] = s[j-1];
            }
            s[i+1] = x;
            n++;
        }else if (a == 5){
            maxsort(s,n);
        }else if (a == 6){
            minisort(s,n);
        }else if (a == 7){
            printf("%d\n",n);
        }else if (a == 8){
            for (int j = 0;j < n;j++){
                printf("%d ",s[j]);
            }
            printf("\n");
        }
    }
    return 0;
}