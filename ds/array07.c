//MANASVI KANSAL (2021b0101013)
#include <stdio.h>
int main()
{
    int N, i, j, A[100], B[100];
    printf("Enter the number of elements in array\n");
    scanf("%d", &N);
    printf("Enter the array elements\n");
    for (i= 0; i<N ; i++)
        scanf("%d", &A[i]);
    for (i=N - 1,j= 0; i>= 0; i--,j++)
        B[j] = A[i];
    for (i= 0; i< N;i++)
        A[i] = B[i];
    printf("Reverse array is\n");
    for (i= 0; i< N; i++)
        printf("%d ", A[i]);
    return 0;
}