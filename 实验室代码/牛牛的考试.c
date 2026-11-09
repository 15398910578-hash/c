#include <stdio.h>
#include <string.h>

int max(int len[]){
    int max = len[0];
    int maxnu = 0;
    for (int i = 0 ; i < 4 ; i++){
        if(len[i] > max){
            max = len[i];
            maxnu = i;
        }
    }
    return maxnu;
}

int mini(int len[]){
    int mini = len[0];
    int mininu = 0;
    for (int i = 0 ; i < 4 ; i++){
        if(len[i] < mini){
            mini = len[i];
            mininu = i;
        }
    }
    return mininu;
}

int main() {
    int n;
    int maxtime  = 0,minitime = 0;
    char a[10000],b[10000],c[10000],d[10000];
    char chosen[4];
    chosen[0] = 'A',chosen[1] = 'B',chosen[2] = 'C',chosen[3] = 'D';
    scanf("%d",&n);
    int len[4];
    while (n--){
        maxtime = 0,minitime = 0;
        scanf("%s %s %s %s",a,b,c,d);
        len[0] = (int)strlen(a),len[1] = (int)strlen(b),len[2] = (int)strlen(c),len[3] = (int)strlen(d);
        for (int j = 0; j < 4; j++){
            if (len[max(len)] > len[j]){
                maxtime++;
            }
        }
        for (int j = 0; j < 4;j++){
            if (len[mini(len)] < len[j]){
                minitime++;
            }
        }
        if (maxtime == 3 && minitime != 3){
            printf("%c\n", chosen[max(len)]);
        }else if(minitime == 3 && maxtime != 3){
            printf("%c\n", chosen[mini(len)]);
        }else{
            printf("C\n");
}
    }
    return 0;
}