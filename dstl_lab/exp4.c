//symetric diff of set
#include<stdio.h>
void symdiffarr(int A[], int m, int B[], int n){
    int i=0;
    int j=0;
    int k=0;
    int c[10];
    while(i<m && j<n){
        if (A[i]<B[j]){
            c[k]= A[i];
            i++;
            k++;
        }
        else {
             if(B[j]<A[i]){
              c[k]= B[j];
              j++;
              k++;
             }
             else{
                i++;
                j++;
            }
        }
    }
    while(i<m){
        c[k]= A[i];
        k++;
        i++;
    }
    while(j<n){
        c[k]=B[j];
        k++;
        j++;
    }
    for(int i=0; i<k; i++){
        printf("%d ",c[i]);
    }
}

int main()
{
    int A[4]= {1,2,3,4};
    int B[6]= {4,5,6,7,8,10};
    symdiffarr(A,4, B, 6);
    return 0;
}