#include<stdio.h>
#include<stdlib.h>
int main (){
    int a,b,x,y;
    scanf("%d %d %d %d",&a,&b,&x,&y);
    printf("%d",(((abs(a-x)<abs(a-y))?(abs(a-x)):abs(a-y)) + ((abs(b-x)<abs(b-y))?(abs(b-x)):abs(b-y)))<abs(a-b)?(((abs(a-x)<abs(a-y))?(abs(a-x)):abs(a-y)) + ((abs(b-x)<abs(b-y))?(abs(b-x)):abs(b-y))):abs(a-b));
    return 0;
}