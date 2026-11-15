/**
 * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
 *
 * @param node int整型
 * @return 无
 *
 * C语言声明定义全局变量请加上static，防止重复定义
 */
static int stack1[1000], stack2[1000];
static int top1 = 0, top2 = 0;

void push(int node) {
    stack1[top1++] = node;
}

/**
 * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
 *
 * @param 无
 * @return int整型
 */
int pop() {
    if (top2 == 0) {                    // 输出栈空，才把 stack1 全部倒过去
        while (top1 > 0) {
            stack2[top2++] = stack1[--top1];
        }
    }
    return stack2[--top2];              // 弹出 stack2 栈顶
}
