//preceence function
#include<stdio.h>
#define TRUE 1
#define FALSE 0
int prcd(char a,char b){
    if(a=='^' || a=='*'||a=='/'|| a=='%'){
        if(b=='^')
            return  FALSE;
        else
            return TRUE;
    }
    else{
        if(b=='+'||b=='-')
            return TRUE;
        else
            return FALSE;
    }
}
int main(){
    printf("%d ",prcd('+','-'));
    printf("%d ",prcd('+','^'));
    printf("%d ",prcd('^','%'));
    printf("%d ",prcd('*','%'));
    printf("%d ",prcd('*','*'));
    return 0;
}