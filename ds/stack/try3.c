//REVERSE OF A STRING USING STACK

#include<stdio.h>
#include<stdlib.h>
#define STACKSIZE 10
struct stack{
    char item[10];
    int top;
};
struct stack s;
void initialize(){
    s.top=-1;
}
void push(char x){
    if(s.top==STACKSIZE-1){
        printf("\n STACK OVERFLOWS");
        exit(1);
    }
    s.top=s.top+1;
    s.top[s.item]=x;
}
char pop(){
    char x;
    if(s.top==-1){
       printf("\n STACK UNDERFLOWS");
       exit(1); 
    }
    x=s.top[s.item];
    s.top=s.top-1;
    return x;
}
char stacktop(){
    char x;
    x=s.top[s.item];
    return x;
}
int empty(){
    if(s.top==-1)
        return 1;
    else
        return 0;
}
int main(){
    struct stack s;
    initialize();
    char x,string[10],rev[10];
    int i=0,j=0;
    scanf("%s", &string);
    while(string[i]!='\0'){
        push(string[i]);
        i++;
    }
    while(!empty()){
        x=pop();
        rev[j]=x;
        j++;
    }
    rev[j]='\0';
    printf("The reversed string of %s is %s.",string,rev);
    return 0;
}