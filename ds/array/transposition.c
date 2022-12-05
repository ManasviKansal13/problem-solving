#include<stdio.h>
void transpose(int n,int A[n][n]){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("\t%d",A[j][i]);
        }
        printf("\n");
    }
}
int main(){
    int a[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    transpose(4,a);
    return 0;
}