//array elements print 
#include<stdio.h>
int main(){
    int i,*p;
    int A[10]={1,2,3,4,5,6,7,8,9,10};
    p=A;
    for(i=0;i<10;i++){
        printf("\t%d",A[i]);
    }
    printf("\n");
    for(i=0;i<10;i++){
        printf("\t%d",*(p+i));
    }
    printf("\n");
    for(i=0;i<10;i++){
        printf("\t%d",*(A+i));
    }
}