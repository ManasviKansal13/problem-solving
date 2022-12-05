//rotaion of matrix to 90 clockwise... 
//transpose
//columns ko reverse krna hai
#include<stdio.h>

void transpose(int n,int A[][4]){
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            int temp = A[i][j];
            A[i][j] = A[j][i];
            A[j][i] = temp;
        }
    }
} 
void print_matrix(int n, int A[][4]) {
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("\t%d",A[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int A[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int B[4][4];
    int N = 4;
    int i,j;
    print_matrix(N,A);
    printf("\n");
    transpose(N,A);

    print_matrix(N,A);
    printf("\n");
    for(i=0;i<N;i++){
        for(j=0;j<N/2;j++){
            int temp = A[i][N-j-1];
            A[i][N-j-1]=A[i][j];
            A[i][j] = temp;
        }
    }
    print_matrix(N,A);
    printf("\n");
    return 0;
}