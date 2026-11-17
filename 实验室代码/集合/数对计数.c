#include <stdio.h>
long n,c,stk[200002],time=0;
int main() {
    scanf("%ld %ld",&n,&c);
    for(int i=0;i<n;i++){
        scanf("%ld",&stk[i]);

    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(stk[i]-stk[j]==c){
                time++;
            }
        }
    }
    printf("%ld",time);
    return 0;
}