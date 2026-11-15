int countStudents(int* students, int studentsLen, int* sandwiches, int sandwichesLen ) {
    int start=0,end=studentsLen-1,begin=0,stk[200];
    for (int i = 0; i < 200; i++) {
        stk[i] = students[i];
    }
    while (1){
        if (stk[start] == sandwiches[begin]){
            start++,begin++;
        }else {
            stk[end+1] = stk[begin];
            end++,begin++;
        }
        if(begin==end){
            return 0;
        }
    }
}