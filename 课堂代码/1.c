#include<stdio.h>
int main (){
    int a,b,i = 0;
    scanf("%d",&a);
    while(1){
        if (a <10){
            break;
        }
        a = a / 10;
        i++;
    }
    b = a + b;
    printf("%d",b );
    return 0;
}

