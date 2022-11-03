//parMETER IS VALID OR NOT
#include<stdio.h>
#include<string.h>
int parameter(char S[32]){
    int flag=0;
    if(S[0]=='_'||(S[0]>='A'&&S[0]<='Z')||(S[0]>='a'&&S[0]<='z')){
        int i=1;
        while(S[i]!='\0'){
            if(S[i]=='_'||S[i]=='$'||(S[i]>='A'&&S[i]<='Z')||(S[i]>='a'&&S[i]<='z')){
                i++;
                printf("Valid Boss");
            }
        }
    }
    else{
        flag=1;
        printf("inValid Boss");
        //break;
    }
    return 0;
}
int main(){
    char abc[32];
    gets(abc);
    parameter(abc);
    return 0;
}