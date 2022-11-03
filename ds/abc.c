/*
//Tail Recurssion
#include<stdio.h>
int write(int A[],int i,int n){
    if(i<n){
        printf("%d ",A[i]);
        write(A,i+1,n);
    }
}
int main(){
    int A[5]={1,2,3,4,5};
    write(A,0,5);
    return 0;
}
*/
// head recursion
#include<stdio.h>
int write(int A[],int i,int n){
    if(i<n){
        write(A,i+1,n);
        printf("%d ",A[i]);
    }
}
int main(){
    int A[5]={1,2,3,4,5};
    write(A,0,5);
    return 0;
}