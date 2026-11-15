long long legalExp(char* str) {
    /* 栈：直接存数字。
       |s| <= 10^6，而合法表达式里"数的个数"最多 (|s|+1)/2，
       所以 500005 个 long long 一定够。
       static 让数组放进全局区，避免 4MB 局部数组撑爆函数栈（默认只有 1~8MB）。 */
    static long long stk[500005];

    int top = 0;   /* 栈顶下标，同时也等于栈里元素个数 */
    int i   = 0;   /* 当前扫到 str 的第几个字符 */

    while (str[i]) {                     /* 逐字符扫到 '\0' 为止 */

        if (str[i] == '#') {             /* '#' 只是"数的结束标记"，不是数据 */
            i++;
            continue;                    /* 跳过，不做任何事 */
        }

        if (str[i] == '+' || str[i] == '-' || str[i] == '*') {
            /* ---------- A. 遇到运算符：弹出两个数 ---------- */
            /* 栈是后进先出：先弹出来的那个是"右操作数"，后弹的才是"左操作数"。
               比如 5#3#- 是 5-3，所以 right 先弹、left 后弹。 */
            long long right = stk[--top];   /* --top：先减下标再取数 = 弹栈 */
            long long left  = stk[--top];

            long long r = (str[i] == '+') ? left + right
                        : (str[i] == '-') ? left - right
                        :                   left * right;

            stk[top++] = r;                 /* top++：先放数再抬下标 = 压栈 */
            i++;                            /* 运算符只占 1 个字符 */
        } else {
            /* ---------- B. 一定是数字字符：拼成整数 ---------- */
            long long v = 0;
            while (str[i] >= '0' && str[i] <= '9') {
                v = v * 10 + (str[i] - '0'); /* '7'-'0' 得 7，字符转数值 */
                i++;                         /* 多位数就继续往后读 */
            }
            stk[top++] = v;                  /* 整个数压栈（不是一位字符） */
        }
    }

    /* 表达式合法 => 最后栈里只剩一个数，就是 stk[0]（此时 top==1，两者同一个位置） */
    return stk[0];
}