//MANASVI KANSAL (2021b0101013)
#include<stdio.h>
void unionarr(int A[],int m,int B[], int n){
    int i=0,j=0,k=0;
    int C[10];
    while(i<m && j<n){
        if(A[i]<B[j]){
            C[k]=A[i];
            i++;
            k++;
        }
        else{
            if(A[i]>B[j]){
                C[k]=B[j];
                j++;
                k++;
            }
            else{
                C[k]=A[i];
                i++;
                j++;
                k++;
            }
        }
    }
    while(i<m){
        C[k]=A[i];
        i++;
        k++;
    }
    while(j<n){
        C[k]=B[j];
        j++;
        k++;
    }
    for(int i=0;i<k;i++)
      printf("%d ",C[i]);
}
int main(){
    int A[4]={1,2,3,4};
    int B[6]={4,5,6,7,8,10};
    unionarr(A,4,B,6);
    return 0;
}