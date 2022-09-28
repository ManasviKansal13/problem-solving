#include<stdio.h>
void ToH(int N,char S,char M,char D){
    if(N==1){
        printf("%c--->%c \n",S,D);
    }
    else{
        ToH(N-1,S,D,M);
        printf("%c--->%c \n",S,D);
        ToH(N-1,M,S,D);
    } 
}
int main(){
    ToH(1,'S','M','D');
    return 0;
}