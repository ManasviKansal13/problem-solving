#include<stdio.h>
#include<stdlib.h>

int partition(int A[],int low, int high){
    int i=low,j=high+1,pivot=A[low],t;
    do{
        do{
            i=i+1;
        }while(A[i]<pivot);
        do
        {
            j=j-1;
        } while (A[j]>pivot); 
        if (i<j)
        {
            t=A[i];
            A[i]=A[j];
            A[j]=t;
        }     
    }while(i<j);
    t=A[j];
    A[j]=A[low];
    A[low]=t;
    return j;
    
}
/******************************/
void quicksort(int A[],int low, int high){
    int j;
    if(low<high){
        j=partition(A,low,high);
        quicksort(A,low,j-1);
        quicksort(A,j+1,high);
    }
}
/*****************************/
int main(){
    int A[11]={20,30,40,10,55,35,80,45,15,5};
    A[10]=__INT_MAX__;
    for(int i=0;i<=9;i++){
       quicksort(A,0,9);
       printf("%d ",A[i]);
    }
    return 0;
}
