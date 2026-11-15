#include <stdio.h>
#include <string.h>

int main (){
    int n = 0;
    scanf("%d",&n);
    while (n--){
        char input[100000];
        scanf("%s",input);
        int len = (int)strlen(input);
        int zhan[100000];
        int zlen = 0;
        for (int i = 0; i < len ; i++){
            char s = input[i];
            if (s == 'o'){
                if (zlen == 0 || zhan[zlen - 1] != 'o'){
                    zhan[zlen] = s;
                    zlen++;
                }else if (zhan[zlen - 1] == 'o'){
                    zhan[zlen - 1] = 'O';
                    if (zhan[zlen - 2] == 'O'){
                        zhan[zlen - 2] = '0';
                        zlen -= 2;
                    }
                }
            }else if (s == 'O'){
                if (zlen == 0 || zhan[zlen - 1] != 'O'){
                    zhan[zlen] = s;
                    zlen++;
                }else if (zhan[zlen - 1] == 'O'){
                    zhan[zlen - 1] = '0';
                    zlen--;
                }
            }
        }
        for (int i = 0; i < zlen ; i++){
            printf("%c",zhan[i]);
        }
        printf("\n");
    }
    return 0;
}