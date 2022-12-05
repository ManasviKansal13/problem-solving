//MANASVI KANSAL (2021b0101013)
#include<stdio.h>
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
void findRepeating(int A[], int N){
    int count = 0;
    for (int i = 0; i < N; i++) {
        int flag = 0;
        while (i < N - 1 && A[i] ==A[i + 1]){
            flag = 1;
            i++;
        }
        if(flag)
            printf("%d, ",(A[i-1]));
    }   
}
int main() 
{ 
    int A[] = {10, 30, 30, 20, 10, 40, 30, 10}; 
    int N = sizeof(A)/sizeof(A[0]);
    bubbleSort(A,N);
    findRepeating(A,N);
    return 0; 
}