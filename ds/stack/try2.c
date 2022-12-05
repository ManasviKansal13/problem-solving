//BASIC PRIMITIVE OPERATIONS ON STACK WITH OVERFLOW & UNDERFLOW

#include<stdio.h>
#include<stdlib.h>
#define STACKSIZE 10
struct stack{
    int item[10];
    int top;
};
struct stack s;
void initialize(){
    s.top=-1;
}
void push(int x){
    if(s.top==STACKSIZE-1){
        printf("\n STACK OVERFLOWS");
        exit(1);
    }
    s.top=s.top+1;
    s.top[s.item]=x;
}
int pop(){
    int x;
    if(s.top==-1){
       printf("\n STACK UNDERFLOWS");
       exit(1); 
    }
    x=s.top[s.item];
    s.top=s.top-1;
    return x;
}
int stacktop(){
    int x;
    x=s.top[s.item];
    return x;
}

int main(){
    struct stack s;
    int a;
    initialize();
    push(100);
    push(200);
    push(300);
    /*
    push(400);
    push(500);
    push(600);
    push(700);
    push(800);
    push(900);
    push(1000);
    push(1200);
    push(1300);
    */
    a=pop();
    printf("The popped element is %d", a);
    a=pop();
    printf("\nThe popped element is %d", a);
    a=stacktop();
    printf("\nThe top element is %d", a);
    a=pop();
    printf("\nThe popped element is %d", a);
    a=pop();
    printf("\nThe popped element is %d", a);    
    return 0;
}