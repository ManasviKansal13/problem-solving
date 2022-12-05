//BASIC PRIMITIVE OPERATIONS ON STACK

#include<stdio.h>
struct stack{
    int item[10];
    int top;
};
struct stack s;
void initialize(){
    s.top=-1;
}
void push(int x){
    s.top=s.top+1;
    s.top[s.item]=x;
}
int pop(){
    int x;
    x=s.top[s.item];
    s.top=s.top-1;
    return x;
}
int main(){
    struct stack s;
    int a;
    initialize();
    push(100);
    push(200);
    push(300);
    a=pop();
    printf("The popped element is %d", a);
    a=pop();
    printf("\nThe popped element is %d", a);
    a=pop();
    printf("\nThe popped element is %d", a);
    a=pop();
    printf("\nThe popped element is %d", a);
    a=pop();
    printf("\nThe popped element is %d", a);
    return 0;
}
