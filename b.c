#include <stdio.h>
int main(){
    int b,k,i,x,j;
    int a[100000];
    scanf("%d %d", &b, &k);
    int c[k];
    for (i = 0; i < b; i++)
        scanf("%d", &a[i]);
/*    for (i = 0; i < b; i++)
        printf("%d ", a[i]);
*/
    x = a[0];
    i  = 0;
    for  (i = 0; i < b; i++){
        if (a[i + 1] != a [i]){
            for (j = 0; j < k; j++){
                c[j] = a[i+j];
            }
//            printf("%d", i);
//            break;
        }
    }
    j = 0;
    for (i = 0; i < b; i++){
        if (a[i]!= c[i%k] ){j++;}
    }
    printf("%d",j);
    return 0;
}