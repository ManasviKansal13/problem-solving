//rotaion of matrix to 90 clockwise... 
//transpose
//rows ko reverse krna hai
#include<stdio.h>
void main(){
    int A[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int B[4][4];
     int N;
    int i,j,t,r,row;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("\t%d",A[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("\t%d",A[j][i]);
        }
        printf("\n");
    }
    for(r=0;r<4;r++){
        row=r;
        i=0,j=3;
        while(i<j){
            t=B[row][i];
            B[row][i]=B[row][j];
            B[row][j]=t;
            i++;
            j--;
        }
    }
    for(i=0;row<4;i++){
        for(j=0;j<4;j++){
            printf("\t%d",B[row][j]);
        }
        printf("\n");
    }
}