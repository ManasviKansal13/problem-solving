//MANASVI KANSAL (2021b0101013)
#include <stdio.h>
int main()
{
    int A[100], loc, i, N, insert;
    printf("Enter number of elements in the array :\n");
    scanf("%d", &N);
    printf("Enter %d elements\n", N);
    for (i= 0;i<N;i++)    
        scanf("%d", &A[i]);
    printf("Enter the location where element is to be inserted:\n");
    scanf("%d", &loc);
    printf("Enter the element to be inserted:\n");
    scanf("%d", &insert); 
    for (i=N-1;i>=loc-1;i--)    
        A[i+1] =A[i];
    A[loc-1] = insert;
    printf("Required array is:\n");
    for (i= 0;i<=N;i++)    
        printf("%d ",A[i]);    
    return 0;
}
