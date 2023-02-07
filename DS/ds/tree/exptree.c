//build expression tree
#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
struct node{
    char data;
    struct node *left;
    struct node *right;
    struct node *Next;
};
struct node* MakeNode(char x){
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    p->left=NULL;
    p->data=x;
    p->right=NULL;
    p->Next=NULL;
    return p;
}
struct Stack{
    struct node *item;
    int top;
};
int IsEmpty() {
  if (Stack-> == -1)
    return TRUE;
  else
    return FALSE;
}
int Initialize() { 
  s.top = -1; 
}
int Push(struct Stack,struct node *x) {
  if (s.top == stacksize - 1) {
    printf("stack is overflowed");
    exit(1);
  }
  s.top++;
  s.item[s.top] = x;
}
int Pop(struct Stack) {
  char x;
  if (IsEmpty()) {
    printf("stack underflowed"); 
    exit(1);
  }
  x = s.item[s.top];
  s.top--;
  return x;
}
char StackTop() {
  char x;
  x = s.item[s.top];
  return x;
}
int Prcd(char a,char b){
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
Void BuildExpTree(Exp[]){
    Stack OprdStack;
    Stack OprtrStack;
    Initialize(OprdStack);
    Initialize(OprtrStack);
    int i=0;
    struct node *T;
    char op,b,a;
    while(Exp[i] != '\0'){
        char symbl;
        symbl=Exp[i];
        if(symbl==opnd){
            struct node *x=Makenode(symbl);
            Push(OpndStack,x);
        }
        else{
            while(!IsEmpty(oprtrStack) && Prcd(StackTop(OprtrStack),symbl)){
                op=Pop(OprtrStack);
                T=MakeNode(op);
                b=Pop(OpndStack);
                a=Pop(OpndStack);
                T->left=a;
                T->right=b;
                Push(OpndStack,T);
            }
            Push(OpndStack,T);
        }
    }
    while(!IsEmpty(OprtrStack)){
        op=Pop(OprtrStack);
        T=MakeNode(op);
        b=Pop(OpndStack);
        a=Pop(OpndStack);
        T->left=a;
        T->right=b;
        Push(OpndStack,T);
    }
    return Pop(OpndStack);
}
