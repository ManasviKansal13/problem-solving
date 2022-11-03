// infix to post fix

#include<stdio.h>
#include<stdlib.h>
#define STACKSIZE 10
#define TRUE 1
#define FALSE 0
struct stack{
    int top;
    char item[10];
};
/*********************/
struct stack s;
/********************/
void intialize(){
    s.top=-1;
}
/********************/
int isempty(){
    if (s.top==-1)
    {
        return TRUE;
    }
    else{
        return FALSE;
    }   
}
/********************/
void push(char x){
    
    if (s.top==STACKSIZE-1)
    {
        printf("Stack overflows");
        exit(1);
    }
    s.top=s.top+1;
    s.item[s.top]=x;   
}
/********************/
char pop(){ 
    char x;
    if(isempty()){
        printf("Stack underflows");
        exit(1);
    }
    x=s.item[s.top];
    s.top=s.top-1;
    return x;
}
/********************/
char stacktop(){
    char x;
    x=s.item[s.top];
    return x;
}
/********************/
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
/********************/
void infixToPostfix(char infixExp[]){
    char postfixExp[30];
    int i=0,p=0;
    char symbol,x;
    intialize();
    while(infixExp[i]!='\0'){
        symbol=infixExp[i];
        i++;
        if(symbol>='a' && symbol<='z'){
            postfixExp[p]=symbol;
            p++;
        }
        else{
            while(!isempty()&& prcd(stacktop(),symbol)){
                x=pop();
                postfixExp[p]=x;
                p++;
            }
            push(symbol);
        }
    }
    while (!isempty()){
        x=pop();
        postfixExp[p]=x;
        p++;
    }
    postfixExp[p]='\0';
    
    
}
/********************/
int main(){
    char infix[]="a+b";
    infixToPostfix(infix);
    return 0;
}
