#include<stdio.h>
int main(){
    int A[4][5];
    int i=2,j=3,x;
    printf("%u",A[0]);
    printf(" %u",&A[2][3]);
    x=(i-0)*(4-0+1)+(j-0);
    printf(" %u",A[0]+x);
    return 0;
} 