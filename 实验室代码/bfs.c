#include <stdio.h>
#include <string.h>
int main() {
    char s[100];
    scanf("%s",s);
    int len = (int)strlen(s);
    int st ,nd,th;
    int yesorno = 0;
    int i;
    for ( i = 0; i < len - 2 ; i++){
        if ((strcmp(s[i],"b") || strcmp(s[i],"B"))){
            st = i;
            if (strcmp(s[i+1],"o") || strcmp(s[i+1],"O")){
                nd = i + 1;
                if (strcmp(s[i+2],"b") || strcmp(s[i+2],"B")){
                    th = i +2;
                    yesorno = 1;
                    break;
                }
            }
        }
    }
    if (yesorno == 1){
//        printf("YES\n");
        printf("%d",st);
    }else {
        printf("-1");
    }
    return 0;
}