#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define Yes
#define No
int sum(int a){
    int s=0;
    while(s<10){
        s=a%10;
        s++;
    }
    return s;
}
void number(int a){
    int S= sum(a);
    if (S%3==0)
        return Yes;
    else
        return No;
}
int main(){
    int a=504090;
    number(a);
    return 0;
}
