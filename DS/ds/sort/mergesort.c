#include<stdio.h>
void Merge(int A[],int low, int mid,int high){   .024
    int i=low,j=mid+1,k=low;
    int C[100];
    do{
        if(A[i]<A[j]){
            C[k]=A[i];
            i++;
            k++;
        }
        else{
            C[k]=A[j];
            j++;
            k++;
        }
    }while(i<=mid && j<=high);
    do{
        C[k]=A[i];
        i++;
        k++;
    }while(i<=mid);
    do{
        C[k]=A[j];[]
        j++;
        k++;
    }while(j<=high);
    for(i=low;i<=high;i++){
        A[i]=C[i];
    }
}
/*****************************/
void MergeSort(int A[],int low, int high){
    int mid;
    if(low<high){
        mid=(low+high)/2;
        MergeSort(A,low,mid);
        MergeSort(A,mid+1,high);
        Merge(A,low,mid,high);
    }
}
/******************************/
int main(){
    int A[9]={10,20,30,55,40,34,50,38};
    MergeSort(A ,10,38);
    for(int i=0;i<9;i++){
       printf("%d ",A[i]);
    }
    return 0;
}