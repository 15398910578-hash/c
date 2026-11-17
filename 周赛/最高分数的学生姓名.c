#include<stdio.h>
#include<string.h>
int main(){
    int mark,n,max=-1;
    char name[10000],best[1000];
    scanf("%d",&n);
    while(n--){
        scanf("%d %s",&mark,name);
        if(mark>max){
            max=mark;
            strcpy(best,name);
        }
    }
    printf("%s",best);
}