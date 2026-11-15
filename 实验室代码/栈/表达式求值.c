int solve(char* s ) {
    int num[128],numtop = 0;
    char ops[128],opstop = 0;
    int expect = 1;
    for(int i = 0;s[i];){
        char c = s[i];
        if (c == ' '){
            i++;
            continue;
        }
        if (c >= '0' && c <= '9'){
            int v = 0;
            while (s[i] >= '0' && s[i] <= '9'){
                v = v*10+(s[i++]-'0');}
            num[numtop++] = v;
            expect = 0;
        }else if (c == '('){
            ops[opstop++] = c;
            i++;
            expect = 1;
        }else if (c == ')'){
            while (ops[opstop-1] != '('){
                char op = ops[--opstop];
                int right = num[--numtop];
                int left = num[--numtop];
                int v;
                if (op == '+'){v = left + right;}
                else if (op == '-'){v = left - right;}
                else if (op == '*'){v = left * right;}
                num[numtop++] = v;
            }
            opstop--;
            i++;
            expect = 0;
        }else {
            if (expect && c != '*'){
                num[numtop++] = 0;
                ops[opstop++] = c;
            }else {
                while(opstop && ops[opstop - 1] != '(' && (ops[opstop - 1] == '*'?2:1) >= (c == '*'?2:1)){
                    char op = ops[--opstop];
                    int right = num[--numtop];
                    int left = num[--numtop];
                    int v;
                    if (op == '+'){v = left + right;}
                    else if (op == '-'){v = left - right;}
                    else if (op == '*'){v = left * right;}
                    num[numtop++] = v;
                }
                ops[opstop++] = c;
            }
            i++;
            expect = 1;
        }
    }
    while(opstop){
        char op = ops[--opstop];
        int right = num[--numtop];
        int left = num[--numtop];
        int v;
        if (op == '+'){v = left + right;}
        else if (op == '-'){v = left - right;}
        else if (op == '*'){v = left * right;}
        num[numtop++] = v;
    }
    return numtop?num[numtop-1]:0;
}