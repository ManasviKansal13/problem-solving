#include <stdio.h>
int main()
{
    int arr[100],loc,i,N;
    printf("Enter number of elements in array\n");
    scanf("%d", &N);
    printf("Enter %d elements\n",N);
    for (i= 0; i<N ;i++ )
    scanf("%d", &arr[i]);
    printf("Enter the location where you wish to delete element\n");
    scanf("%d", &loc); 
    if (loc>=N+1)    
        printf("Deletion not possible.\n");
    else{    
        for (i=loc-1;i<N-1;i++) 
        arr[i] = arr[i+1];        
        printf("Resultant array is\n");
        for(i= 0;i<N-1;i++)        
        printf("%d ", arr[i]);        
    }    
    return 0;
}