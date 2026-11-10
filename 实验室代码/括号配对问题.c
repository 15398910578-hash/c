#include <stdio.h>
#include <string.h>

int main() {
    int a = 0,b = 0;
    char input[100000];
    scanf("%s",input);
    int len = (int)strlen(input);
    for (int i = 0; i < len ; i++){
        if (input[i] == '(' && a == 0){
            a = 1;
        }else if (input[i] == '(' && a != 0){
            printf("false");
            return 0;
        }
        if (input[i] == '[' && b == 0){
            b = 1;
        }else if (input[i] == '[' && b != 0){
            printf("false");
            return 0;
        }
        if (input[i] == ')' && a == 1 && b == 0){
            a = 0;
        }else if (input[i] == ')' && a != 1){
            printf("false");
            return 0;
        }
        if (input[i] == ']' && b == 1 && a == 0){
            b = 0;
        }else if (input[i] == ']' && b != 1){
            printf("false");
            return 0;
        }
    }
    if (a == 0 && b == 0){
        printf("true");
    }else {
        printf("false");
    }
    return 0;
}