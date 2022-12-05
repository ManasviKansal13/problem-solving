//pointer basics
#include<stdio.h>
int main(){
    int x,*p;
    *p=x;
    x=10;
    printf("\t%u",&x);
    printf("\t%d",x);
    printf("\t%u",p);
    printf("\t%d",*p);
    return 0;
}