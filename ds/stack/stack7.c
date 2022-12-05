//multiple stack in one array
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
int N,M,i;
/********************/
void intialize(){
    s.top=(N/M)*i-1;
}
/********************/
int isempty(){
    if (s.top==(N/M)*i-1)
    {
        return TRUE;
    }
    else{
        return FALSE;
    }   
}
/********************/
void push(int x){
    
    if (s.top==(N/M)*(i+1)-1)
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
    int N,M,i,x;
    printf("Enter the number of elements in array: ");
    scanf("%d",&N);
    printf("Enter the number of stacks you wanna divide in: ");
    scanf("%d",&M);
    printf("Enter the stack number: ");
    scanf("%d",&i);

    //int x;
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
    return 0;
}