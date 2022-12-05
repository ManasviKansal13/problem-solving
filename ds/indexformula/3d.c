#include<stdio.h>
int main(){
    int A[4][5][6];
    int i=2,j=3,k=4,x;
    printf("%u",A[0][0]);
    printf(" %u",&A[2][3][4]);
    x=(i-0)*(4-0+1)*(5-0+1)+(j-0)*(5-0+1)+(k-0);
    printf(" %u",A[0][0]+x);
    return 0;
}