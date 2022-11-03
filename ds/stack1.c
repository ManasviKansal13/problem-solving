#include<stdio.h>
#include<stdlib.h>
#define STACKSIZE 10
#define TRUE 1
#define FALSE 0
struct stack{
    int top;
    int item[STACKSIZE];
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
void push(int x){
    
    if (s.top==STACKSIZE-1)
    {
        printf("Stack overflows");
        exit(1);
    }
    s.top=s.top+1;
    s.item[s.top]=x;   
}
/********************/
int pop(int x){
    
    if(isempty()){
        printf("Stack underflows");
        exit(1);
    }
    x=s.item[s.top];
    s.top=s.top-1;
    return x;
}
/********************/
int stacktop(int x){
    x=s.item[s.top];
    return x;
}
/********************/
int main(){
    int x;
    intialize();
    push(100);
    push(200);
    push(300);
    push(400);
    
    x=pop(0);
    printf("popped element is %d",x);
    x=pop(0);
    printf("popped element is %d",x);
    x=pop(0);
    printf("popped element is %d",x);
    x=pop(0);
    printf("popped element is %d",x);
    x=pop(0);
    printf("popped element is %d",x);
    return 0;
}