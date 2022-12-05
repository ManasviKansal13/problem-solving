//MANASVI KANSAL (2021b0101013)
#include <stdio.h>
int main(){
    int A[100], B[100], mergeArray[200], M, N, MS;
    int index1, index2, mergeIndex,i;
    printf("Enter the size of first array : ");
    scanf("%d", &M);
    printf("Enter elements in first array : ");
    for(i=0; i<M; i++){
        scanf("%d", &A[i]);
    }
    printf("\nEnter the size of second array : ");
    scanf("%d", &N);
    printf("Enter elements in second array : ");
    for(i=0; i<N; i++){
        scanf("%d", &B[i]);
    }
    MS=M+N;
    index1 = 0;
    index2 = 0;
    for(mergeIndex=0; mergeIndex <MS; mergeIndex++){
        if(index1 >= M || index2 >= N){
            break;
        }
        if(A[index1] < B[index2]){
            mergeArray[mergeIndex] =A[index1];
            index1++;
        }
        else{
            mergeArray[mergeIndex] = B[index2];
            index2++;
        }
    }
    while(index1 < M){
        mergeArray[mergeIndex] = A[index1];
        mergeIndex++;
        index1++;
    }
    while(index2 < N){
        mergeArray[mergeIndex] = B[index2];
        mergeIndex++;
        index2++;
    }
    printf("\nArray merged in ascending order : ");
    for(i=0; i<MS; i++)
    {
        printf("%d ", mergeArray[i]);
    }
    return 0;
}