#include<stdio.h>
#include<stdlib.h>
int main(){
    int a,n,p;
    int *arr;
    printf("Enter number of elements in the array :\n");
    scanf("%d",&a);
    arr = malloc((a+1) * sizeof(int));
    printf("Enter %d elements in the sorted array: \n",a);
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to be inserted:\n");
    scanf("%d",&n);
    p=a;
    for(int i=0;i<a;i++){
        if(n<arr[i]){
            p=i;
            break;
        }
    }
    for(int i=a;i>=p;i--){
        arr[i]=arr[i-1];
    }
    arr[p]=n;
    printf("Required array is:\n");
    for(int i=0;i<a+1;i++){
        printf("%d ",arr[i]);
    }
}
