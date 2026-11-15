#include <stdio.h>
int n = 0,input[100001],output[100005],it=0,ot=0;
int ruzhan(){
    for (int i = 0; i < n ;i++){
        if (input[it] != output[ot]){
            ot++;
        }else {
            break;
        }
    }
}

int main() {
    int q;
    
    scanf("%d",&q);
    while (q--){
        ot=0,it=0;
        scanf("%d",&n);
        for (int i = 0; i < n;i++){
            scanf("%d",&input[i]);
        }
        for (int i = 0; i < n;i++){
            scanf("%d",&output[i]);
        }
        ruzhan;
        while (1){
            for(int i = it;i < ot;i++){
                if (output[ot] == input[i]){
                    ot++;
                }else {
                    if(output[ot] != input[i-1]){
                        
                    }
                }
            }
        }
    }
    return 0;
}