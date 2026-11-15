#include <stdio.h>

int main() {
    int n,input,stk[100000],st=-1;
    scanf("%d",&n);
    while(n--){
        scanf("%d",&input);
        if(input==1){
            scanf("%d",&input);
            st++;
            stk[st]=input;
        }else if(input==2){
            if(st!=-1){
                st--;
            }else printf("ERR_CANNOT_POP\n");
        }else if(input==3){
            if(st!=-1){
                printf("%d",stk[st]);
            }else printf("ERR_CANNOT_QUERY\n");
        }else if(input==4){
            printf("%d\n",st);
        }
    }
    return 0;
}