#include<stdio.h>
#include<stdlib.h>
/************************/
int N;
/************************/
void ArrInsert(int *A, int i,int x){
    for(int  j=N-1;j>=i;j--)
        A[j+1]=A[j];
    A[i]=x;
    //N=N+1;
}
/************************/
void ArrDelete(int *A){
    for(int i=0;i<N;i++)
        A[i-1]=A[i];
    
}
/************************/
void EnQueue(int *A, int x){
    int i=0;
    while(i<N && x<A[i])
        i++;
    ArrInsert(A,i,x);
    N++;
}
/************************/
void display(int *A){
    for(int i=0;i<=N;i++)
        printf("%d\t",A[i]);
}
/************************/
int DeQueue(int *A){
    int i,x;
    x=A[N-1];
    ArrDelete(A);
    N--;
    return x;
}
/************************/
int main(){
    int A[100],N=0;

    EnQueue(A,10);
    EnQueue(A,7000);
    EnQueue(A,30);
    EnQueue(A,400);
    EnQueue(A,50);
    EnQueue(A,30);
    EnQueue(A,70);
    display(A);
    printf("\n%d",DeQueue(A));
    printf("\n%d",DeQueue(A));
    return 0;
}