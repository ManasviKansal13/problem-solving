//rotaion of matrix to 180 clockwise... 
//transpose
//rows ko reverse krna hai

#include<stdio.h>
int main(){
    int A[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int B[4][4];
    int N;
    int i,j;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("\t%d",A[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            A[i][j]=A[4-i-1][j];
            printf("\t%d",A[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}