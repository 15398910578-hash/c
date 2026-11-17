#include<stdio.h>
int main (){
    int score[3],t;
    char charter[3]={'A','B','C'},s[3];
    scanf("%d",&t);
    while(t--){
        for(int i=0;i<3;i++){
            score[i]=0;
        }
        for(int i=0;i<3;i++){
            scanf("%s",s);
            if(s[1]=='>'){
                if(s[0]=='A')score[0]++;
                else if(s[0]=='B')score[1]++;
                else if(s[0]=='C')score[2]++;
            }else if(s[1]=='<'){
                if(s[2]=='A')score[0]++;
                else if(s[2]=='B')score[1]++;
                else if(s[2]=='C')score[2]++;
            }
        }
        if(score[0]==score[1]){printf("Impossible\n");continue;}
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(score[j]==i)printf("%c",charter[j]);
            }    
        }
        printf("\n");
    }
    return 0;
}