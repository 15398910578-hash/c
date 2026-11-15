int stk[10000000];
int stop = 0;



void push(int value ) {               //表示有车停进去
    stk[stop] = value;
    stop++;
}

void pop() {                       //有车辆驶出去
    stop--;
    
}

int top() {                            //返回栈顶的车牌号
    return stk[stop-1];
}

int min() {                        //返回车牌号最小的车牌号
    int mini = stk[0];
    for (int i = 0; i < stop; i++){
        if (mini > stk[i]){
            mini = stk[i];
        }
    }
    return mini;
}