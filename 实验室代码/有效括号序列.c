#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main() {
    char s[10005];      // 存放输入的字符串，题目说长度最多 10^4
    

    scanf("%s", s);     // 读入字符串（遇到空格/回车停止）
    char stack[10005];      // 用数组当栈，只存没匹配上的左括号
    int top = -1;           // 栈顶指针。-1 表示栈是空的

    int len = (int)strlen(s);   // 字符串长度

    for (int i = 0; i < len; i++) {          // 一个字符一个字符地看
        char c = s[i];

        // 情况1：遇到左括号，就把它"记住"（放进栈里）
        if (c == '(' || c == '[' || c == '{') {
            top = top + 1;          // 栈顶往上挪一格
            stack[top] = c;         // 把这个左括号放进去
        }
        // 情况2：遇到右括号 ')'
        else if (c == ')') {
            // 它必须和"最近一个还没匹配的左括号"配对
            // 那个左括号就在栈顶 stack[top]
            if (top != -1 && stack[top] == '(') {
                top = top - 1;      // 配对成功！把它从栈里拿掉
            } else {
                // 栈是空的（前面根本没有左括号）
                // 或者栈顶是 '[' 不是 '('，类型对不上
//                printf("false");
                return false;
            }
        }
        // 情况3：遇到右括号 ']'，同理
        else if (c == ']') {
            if (top != -1 && stack[top] == '[') {
                top = top - 1;      // 配对成功，拿掉
            } else {
//                printf("false");
                return false;
            }
        }
        // 情况4：遇到右括号 '}'，同理
        else if (c == '}') {
            if (top != -1 && stack[top] == '{') {
                top = top - 1;      // 配对成功，拿掉
            } else {
//                printf("false");
                return false;
            }
        }
        // 其他字符（字母、数字等）题目说了不用管，直接跳过
    }

    // 循环走完了。如果栈里还剩东西，说明有左括号一直没人跟它配对
    // 比如 "abc(" 这种，( 没人配，也要输出 false
    if (top != -1) {
        return false;
    } else {
        return true;
    }

    return 0;
}
