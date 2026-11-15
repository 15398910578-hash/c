


long long legalExp(char* str ) {
    int len = (int)strlen(str),zlen=0,num1=0,num2=0;
    char zhan[1000000],nv[100],tmp[100];
    for (int i = 0;i <len;i++){
        if (str[i] == '+'){
            for (int j = 1;!(str[zlen-1] == '#');j++){
                nv[j] = zhan[zlen-1];
                zlen--;
            }
            sscanf(nv,"%d",&num1);
            for (int j = 1;!(str[zlen-1] == '#');j++){
                nv[j] = zhan[zlen-1];
                zlen--;
            }
            sscanf(nv,"%d",&num2);
            num1 = num1 + num2;
            while (num1 != 0){
                num1 = num1 *10 + num1 %10;
                num1 = num1 / 10;
            }
            sprintf(tmp,"%d#",num1);
            strcat(zhan,tmp);
        }else if (str[i] == '-'){
            sscanf(zhan,"%d",&num1);
            for (int j = 1;!(str[zlen-1] == '#');j++){
                nv[j] = zhan[zlen-1];
                zlen--;
            }
            sscanf(nv,"%d",&num1);
            for (int j = 1;!(str[zlen-1] == '#');j++){
                nv[j] = zhan[zlen-1];
                zlen--;
            }
            sscanf(nv,"%d",&num2);
            num1 = num1 - num2;
            while (num1 != 0){
                num1 = num1 *10 + num1 %10;
                num1 = num1 / 10;
            }
            sprintf(tmp,"%d#",num1);
            strcat(zhan,tmp);
        }else if (str[i] == '*'){
            sscanf(zhan,"%d",&num1);
            for (int j = 1;!(str[zlen-1] == '#');j++){
                nv[j] = zhan[zlen-1];
                zlen--;
            }
            sscanf(nv,"%d",&num1);
            for (int j = 1;!(str[zlen-1] == '#');j++){
                nv[j] = zhan[zlen-1];
                zlen--;
            }
            sscanf(nv,"%d",&num2);
            num1 = num1 * num2;
            while (num1 != 0){
                num1 = num1 *10 + num1 %10;
                num1 = num1 / 10;
            }
            sprintf(tmp,"%d#",num1);
            strcat(zhan,tmp);
        }else {
            zhan[zlen] = str[i];
            zlen++;
        }
    }
    sscanf(zhan,"%d",&num1);
    for (int j = 1;!(str[zlen-1] == '#');j++){
        nv[j] = zhan[zlen-1];
        zlen--;
    }
    sscanf(nv,"%d",&num1);
    return num1;
}