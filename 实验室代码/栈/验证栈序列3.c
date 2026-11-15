
#include <stdio.h>
int input[1000001],output[1000001],stk[1000001],it=-1,ot=-1,st=-1,n;

int main (){
    int q;scanf("%d",&q);
    while (q--){
        ot=0,st=0;
        scanf("%d",&n);
        for (int i = 0; i < n;i++){
            scanf("%d",&input[i]);
        }
        for (int i = 0; i < n;i++){
            scanf("%d",&output[i]);
        }

        for (int i=0;i<n;i++){
            if (st == 0|| stk[st-1] != output[ot-1]){
                stk[st] = input[it];
                st++,it--;
            }else if (stk[st-1] == output[ot-1]){
                ot++,st--;
            }
        }
        if (ot == n){
            printf("Yes\n");
        }else printf("No\n");
    }
}