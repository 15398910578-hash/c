#include<stdio.h>
int main(){
    int a,hp,i;
    scanf("%d",&a);
    for( i = 0;i<a;i++){
        scanf("%d",&hp);
        if (hp<75){
            printf("AOLIGEI!");
        }else {
            printf("DAAAAAMN!");
        }
    }
}
