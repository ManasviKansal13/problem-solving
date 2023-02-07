//char stored and int stored
//p=(int *)malloc(10*sizeof(int))
//p=(int *)malloc(N*sizeof(int))
#include<stdio.h>
#include<stdlib.h>
int main(){
    char *q;
    //p=(int *)malloc(4);
    q=(char *)malloc(4);
    //*p=10;
    *q='a';
    *(q+1)='b';
    *(q+2)='c';
    *(q+3)='d';
    //printf(" %d",*p);
    for(int i=0;i<4;i++){
        printf(" %c",*(q+i));
    }
    return 0;
}