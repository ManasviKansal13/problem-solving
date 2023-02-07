#include<stdio.h>
int main(){
    int n;
    printf("Enter the count of no's uh wanna add:");
    scanf("%d",&n);
    int Arr[n];
    printf("Enter the Numbers in array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&Arr[i]);
        printf("%d\t",Arr[i]);
    }   
    return 0;
}