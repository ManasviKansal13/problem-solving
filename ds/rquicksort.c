#include<stdio.h>
#include<stdlib.h>
#include <time.h>
int partition(int A[],int low, int high){
    int t;
    srand(time(0));
    int random=rand()%(high-low)+low;
   
    t=A[low];
    A[low]=A[random];
    A[random]=t;
    int i=low,j=high+1,pivot=A[low];
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
    int A[10]={2,4,6,8,10,12,14,16,20};
    A[9]=__INT_MAX__;
    quicksort(A,0,9);
    for(int i=0;i<9;i++){
       printf("%d ",A[i]);
    }
    return 0;
}