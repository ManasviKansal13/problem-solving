#include<stdio.h>
#include<stdlib.h>
int temp;
void MaxHeapify(int A[],int i,int n){
    while(2*i<=n){
        int L=2*i;
        int R=2*i+1;
        int max=L;
        if(R<=n){
            if(A[R]>A[L])
                max=R;
        }
        if(A[max]>A[i]){
            temp=A[max];
            A[max]=A[i];
            A[i]=temp;
        }
        else
            break;
        i=max;
    }
}
void BuildMaxHeap(int A[],int n){
    for(int i=n/2;i>0; i--)
        MaxHeapify(A,i,n);
}
void HeapSort(int A[],int n){
    BuildMaxHeap(A,n);
    for(int j=n; j>=2; j--){
        //swap(a[1],a[j]);
        temp=A[1];
        A[1]=A[j];
        A[j]=temp;
        MaxHeapify(A,1,j-1);
    }
}
int main(){
    int Arr[11]={-1,70,100,300,200,50,60,10,80,40,5};
    HeapSort(Arr,10);                                         
    for(int i=1; i<=10; i++)
        printf("%d\t",Arr[i]);
    return 0;
}