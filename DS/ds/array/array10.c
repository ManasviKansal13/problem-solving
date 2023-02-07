//MANASVI KANSAL (2021b0101013)
#include <stdio.h>
void intersectarr(int A[], int m, int B[], int n){
    int i=0,j=0,k=0;
    int c[1];
    while(i<m && j<n){
        if (A[i]<B[j]){
            i++;
        }
        else {
         if(B[j]<A[i]){
            j++;
            }
            else{
                c[k]=A[i];
                i++;
                k++;
                j++;
            }
        }
    }
    for(int i=0; i<k; i++){
        printf("%d ",c[i]);
    }
}
int main(){
    int A[4]= {1,2,3,4};
    int B[6]= {4,5,6,7,8,10};
    intersectarr(A,14, B, 6);
    return 0;
}