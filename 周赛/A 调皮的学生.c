#include<stdio.h>
int main (){
    int n,num,i,a=3;
    scanf("%d",&n);
    int stu[n];
    stu[0]=0;
    while(a--){
        scanf("%d",&num);
        while(num--){
            scanf("%d",&i);
            stu[--i]++;
        }
    }
    num=0;
    while(n--){
        if(stu[n]!=1)num++;
    }
    printf("%d",num);
}