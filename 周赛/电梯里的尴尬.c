    #include<stdio.h>
    int main(){
        int n,stk[100000],max=0,wait[1000000]={0},time=0;
        scanf("%d",&n);
        for (int i=0;i<n;i++){
            scanf("%d",&stk[i]);
            if(max<stk[i])max=stk[i];
            wait[stk[i]]++;
        }
        for(int i=0;i<max;i++){
            if(wait[i]!=0)time += 5;
        }
        time += max*10 + n;
        printf("%d",time);
    }