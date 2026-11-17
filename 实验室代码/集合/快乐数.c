#include <stdbool.h>

// 辅助函数：求 n 各位数字的平方和，相当于"走一步"
int squareSum(int n) {
    int sum = 0;
    while (n > 0) {
        int d = n % 10;   // 取出个位
        sum += d * d;     // 平方后累加
        n /= 10;          // 去掉个位
    }
    return sum;
}

bool happynum(int n) {
    int slow = n;             // 慢指针：从起点出发
    int fast = squareSum(n);  // 快指针：先走 1 步，和慢指针错开

    while (slow != fast) {          // 没相遇就继续追
        slow = squareSum(slow);             // 慢的走 1 步
        fast = squareSum(squareSum(fast));  // 快的走 2 步
    }

    // 走到这里说明相遇了：停在 1 就是快乐数，停在别处就是掉进了别的环
    return slow == 1;
}