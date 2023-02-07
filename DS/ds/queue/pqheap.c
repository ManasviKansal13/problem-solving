#include<stdio.h>
#include<stdlib.h>
/**************************/
int N;
/**************************/
void exchange(int x,int y){
     int temp;
     temp=x;
     x=y;
     y=temp;
}
/**************************/
void InsertHeap(int *A,int key){
    A[N]=key;
    int i,x,y;
    x=N;
    y=(N-1)/2;
    while(i>0 && A[x]<A[y]){
        exchange(A[x],A[y]);
        x=y;
    }
    N++;
}
/**************************/
void Adjust(int *A,int i){
    while(2*i+1<N){
        int L=2*i+1;
        int R=2*i+2;
        int minindex=L;
        if(R<N){
            if(A[R]<A[L])
                minindex=R;
            A[minindex]<A[i];
            exchange(A[minindex],A[i]);
        }
        else
            break;
        i=minindex;
    }
}
/************************/
void display(int *A){
    for(int i=0;i<=N;i++)
        printf("\t%d",A[i]);
}
/**************************/
int DeleteHeap(int *A){
    int x=A[0];
    A[0]=A[N-1];
    Adjust(A,0);
    N--;
    return x;
}
/**************************/
int main(){
    int  A[100],N=0;
    InsertHeap(A,5);
    InsertHeap(A,10);
    InsertHeap(A,20);
    InsertHeap(A,15);
    InsertHeap(A,25);
    InsertHeap(A,30);
    InsertHeap(A,40);
    InsertHeap(A,22);
    display(A);
    DeleteHeap(A);
    return 0;
}
