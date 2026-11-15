#include <stdio.h>

int main (){
    int n,nmax = 0,ot = 0,omax = 0,nt = 0;      //ouput是栈。num是原始数据，ot栈顶
    static int num[1000000],output[1000000];
    scanf("%d",&n);
    for (int i = 0; i < n ; i++){
        scanf("%d",&num[i]);
    }
    for (int i = 0; i < n; i++){
        nmax = 0;
        for (int j = nt;j < n;j++){
            if (num[j] > nmax){
                nmax = num[j];
            }
        }
/*        omax = 0;
        for (int j = 0; j < ot ; j++){
            if (output[j] > omax){
                omax = output[j];
            }
        }*/
       if (nt == n){
        break;
       }
        if (output[ot-1] > nmax && ot != 0){
            printf("%d ",output[ot-1]);
            ot--;
        }else {
            output[ot] = num[nt];
            ot++;nt++;
        }
    }
    while (ot--){
        printf("%d ",output[ot]);
    }
    return 0;
}