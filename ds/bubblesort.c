#include <stdio.h>
void bubbleSort(int A[],int N){
    for (int i = 0; i <N-1; i++){    
      for (int j = 0; j < N-i-1; j++) 
        if (A[j] > A[j+1]) {
            int t = A[j];
            A[j] = A[j+1]; 
            A[j+1] = t; 
        }
    }
}
int main(){
    int A[50],n,i;  
    printf("Please Enter the Number of Elements you want in the array: ");
    scanf("%d",&n);    
    printf("Please Enter the Value of Elements: ");
    for(i=0;i<n;i++)
        scanf("%d", &A[i]);    
    bubbleSort(A, n);
    printf("array after implementing bubble sort: ");    
    for(i = 0; i < n; i++){
        printf("%d  ", A[i]);
    }   
    return 0;
}