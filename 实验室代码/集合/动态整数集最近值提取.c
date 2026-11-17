#include <stdio.h>
#include<string.h>
#include<math.h>
int main() {
    int q,input,stk[100000],top=0,delta,n=0;
    scanf("%d",&q);
    while(q--){
        scanf("%d",&input);
        if (input==1){
            scanf("%d",&input);
            int found=0;
            for(int i=0;i<top;i++){
                if(stk[i]==input){
                    printf("Already Exist\n");
                    found=1;
                    break;
                }
            }
            if(found)continue;
            stk[top]=input;
            top++;
        }else{
            scanf("%d",&input);
            if(top==0){printf("Empty\n");continue;}
            
            
            delta=abs(stk[top-1]-input),n=top-1;
            for (int i=top-1;i>=0;i--){
                int d = abs(input - stk[i]);
                if (d < delta || (d == delta && stk[i] < stk[n])) {
                    delta = d;
                    n = i;
                }
                
            }
            printf("%d\n",stk[n]);
            memmove(stk+n,stk+n+1,(top - n - 1) * sizeof(int));
            top--;
        }
    }
    return 0;
}