#include <stdio.h>
int input[1000001],output[1000001],stk[1000001],it=-1,ot=-1,ts=-1,n;

int main (){
    int q;scanf("%d",&q);
    while (q--){
        it=-1,ot=-0,ts-1;
        scanf("%d",&n);
        for (int i = 0; i < n;i++){
            scanf("%d",&input[i]);
        }
        for (int i = 0; i < n;i++){
            scanf("%d",&output[i]);
        }
        for(int i = n-1;i >= 0;i--){
            if(input[i] == output[ot] || input[i-1] == output[ot]){
                ot++;
                continue;
            }else{
                input[i] = output[ot];
                ot++;
            }
            
        }
    }
}