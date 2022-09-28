//intersectn of two arrays
#include <stdio.h>
void intersectarr(int A[], int m, int B[], int n){
    int i=0;
    int j=0;
    int k=0;
    int c[1];
    while(i<m && j<n){
        if (A[i]<B[j]){
            //c[k]= A[i];
            i++;
            //k++;
        }
        else 
        { if(B[j]<A[i]){
            //c[k]= B[j];
            j++;
           // k++;
            }
            else{
                
                c[k]=A[i];
                i++;
                k++;
                j++;
            }
        }
    }
    // while(i<m){
    //     c[k]= A[i];
    //     k++;
    //     i++;
    // }
    // while(j<n){
    //     c[k]= B[j];
    //     k++;
    //     j++;
    // }
    for(int i=0; i<k; i++){
        printf("%d ",c[i]);
    }
}

int main()
{
    int A[4]= {1,2,3,4};
    int B[6]= {4,5,6,7,8,10};
    intersectarr(A,14, B, 6);
    return 0;
}