//prefix evaluation

#include<iostream>
using namespace std;
#define STACKSIZE 10
#define TRUE 1
#define FALSE 0
/********************/
int pow(int a,int b){
    int power;
    if(b>0)
        power=a*pow(a,b-1);
    else
        power=1;
    return power;
}
struct Stack
{
    int item[STACKSIZE];
    int TOP;
};
struct Stack s;
/************************/
int IsEmpty(){
    if(s.TOP==-1)
       return TRUE;
    else 
       return FALSE;
}
/************************/
int POP(){
    if(IsEmpty()){
        printf("\nSTACK UNDERFLOW ");
        exit(1);
    }
    int x = s.item[s.TOP];
    s.TOP--;
    return x;
}
/************************/
void PUSH(int x){
    if(s.TOP==STACKSIZE-1){
        printf("\nSTACK OVERFLOW");
        exit(1);
    }
    s.TOP++;
    s.item[s.TOP]=x;
}
/************************/
void Initialize(){
    s.TOP=-1;
}

int stackTOP(){
    int x= s.item[s.TOP];
    return x;
}
/************************/
int Evaluate(int a,int b,char op){
    switch(op){
        case '+': return a+b;
        case '*': return a*b;
        case '-': return a-b;
        case '&': return a&b;
        case '/': return a/b;
        case '^': return pow(a,b);
    }
}
/********************/
char reverse(char *New[]){
    int i=0;
    int j=0;
    while (New[i]!='\0')
    {
        i=i+1;
    }
    //printf("%d \n",i);
    i=i-1;
    while(j<i){
      char t=New[i];
      New[i]=New[j];
      New[j]=t;
      j++,i--;
    }
    return New;
    //printf("%s \n",New);
}
/************************/
int main(){
    int x,i=0,val,b,a;
    char PS[20];
    char symb;
    Initialize();
    gets(PS);
    reverse(PS);
    scanf("%s", &PS);
    while(PS[i]!='\0'){
        symb=PS[i];
        if(symb>='0'&&symb<='9'){
            PUSH(symb-48);
        }
        else{
             a= POP();
             b= POP();
            val =Evaluate(a,b,symb);
            PUSH(val);
        }
        i++;
    }
    x=POP();
    printf("%d",x);
    return 0;
}