#include<stdio.h>
int main(){
    int stk[5][5],x,y,z[5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            scanf("%d",&stk[i][j]);
        }
    }
    scanf("%d %d",&x,&y);
    for(int i=0;i<5;i++){
        z[i]=stk[x-1][i];
        stk[x-1][i]=stk[y-1][i];
        stk[y-1][i]=z[i];
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            printf("%d ",stk[i][j]);
        }
        printf("\n");
    }
    return 0;
}
