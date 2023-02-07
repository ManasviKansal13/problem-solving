//2 stacks
#include<stdio.h>
#include<stdlib.h>
#define STACKSIZE 10
#define TRUE 1
#define FALSE 0
struct stack{
    int top1,top2;
    int item[STACKSIZE];
};
/*********************/
struct stack s;
/********************/
void intialize(){
    s.top1=-1;
    s.top2=STACKSIZE;
}

/********************/
int isempty1(){
    if (s.top1==-1)
    {
        return TRUE;
    }
    else{
        return FALSE;
    }   
}
/********************/
int isempty2(){
    if (s.top2==STACKSIZE)
    {
        return TRUE;
    }
    else{
        return FALSE;
    }   
}
/********************/
void push1(int x){
    
    if (s.top1+1==s.top2)
    {
        printf("Stack overflows");
        exit(1);
    }
    s.top1=s.top1+1;
    s.item[s.top1]=x;   
}
/********************/
void push2(int x){
    
    if (s.top2==s.top1)
    {
        printf("Stack overflows");
        exit(1);
    }
    s.top2=s.top2-1;
    s.item[s.top2]=x;   
}
/********************/
int pop1(){
    
    if(isempty1()){
        printf("Stack underflows");
        exit(1);
    }
    x=s.item[s.top1];
    s.top1=s.top1-1;
    return x;
}
/********************/
int pop2(int x){
    
    if(isempty2()){
        printf("Stack underflows");
        exit(1);
    }
    x=s.item[s.top2];
    s.top2=s.top2+1;
    return x;
}
/********************/
int stacktop1(int x){
    x=s.item[s.top1];
    return x;
}
/********************/
int stacktop2(int x){
    x=s.item[s.top2];
    return x;
}
/********************/
int main(){
    int x;
    initialize();
    push1(100);
    push2(200);
    push1(300);
    push2(400);
    
    x=pop1();
    printf("popped element is %d",x);
    x=pop2();
    printf("popped element is %d",x);
    x=pop1();
    printf("popped element is %d",x);
    x=pop2();
    printf("popped element is %d",x);
    return 0;
}