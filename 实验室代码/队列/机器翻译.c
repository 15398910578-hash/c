#include <stdio.h>
int main (){
    int m,n,stk[1000],s=0,e=0,dic[2000],miss=0;
    scanf("%d %d",&m,&n);
    for (int i = 0;i < n; i++){
        int yn=0;
        scanf("%d",&stk[i]);
        for(int j=s;j<e;j++){
            if(dic[j]==stk[i]){
                yn=1;
            }
        }
        if(yn)continue;
        miss++;
        if(e-s==m){
            s++;
        }
        dic[e++]=stk[i];
    }
    printf("%d",miss);
    return 0;
}