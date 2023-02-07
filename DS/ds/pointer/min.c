
#include<stdio.h>
#include<stdlib.h>
#define STACKSIZE 10
#define TRUE 1
#define FALSE 0
struct Stack {
    int item[10];
    int top;
};

void Initialize(struct Stack *S){
    S->top=-1;
}
void push(struct Stack *S,int x){
    if (S->top==(STACKSIZE-1)){
        printf("\n STACK OVERFLOWS");
        exit(1);
    }
    else{
        S->top=S->top+1;
        S->item[S->top]=x;
    }

}
int IsEmpty(struct Stack *S){
    if (S->top==-1)
        return TRUE;
    else
        return FALSE;
}
int Pop(struct Stack *S){
    if(IsEmpty(S)){
        printf("\n STACK UNDERFLOWS");
        exit(1);
    }
    else{
        int x=S->item[S->top];
        S->top=S->top-1;
        return x;
    }
}
int stacktop(struct Stack *S){
    int x= S->item[S->top];
    return x;
}
int main(){
    struct Stack fs;
    struct Stack ss;
    int k;
    int min=__INT_MAX__;
    Initialize(&fs);
    Initialize(&ss);
    push(&fs,100);
    push(&fs,400);
    push(&fs,300);
    push(&fs,120);
    while(!IsEmpty(&fs)){
        k=stacktop(&fs);
        if(k<min){
            min=k;
        }
        else{
            Pop(&fs);
            push(&ss,k);
        }
    }
    while(!IsEmpty(&ss)){
        Pop(&ss);
        push(&fs,k);
    }
    printf("%d",min);
    return 0;
}