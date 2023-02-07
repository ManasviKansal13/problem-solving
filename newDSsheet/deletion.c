#include<stdio.h>
int main(){
    int n,Loc,Delete;
    printf("Enter the count of no's uh wanna add:");
    scanf("%d",&n);
    int Arr[n];
    printf("Enter the Numbers in array: ");
    for(int i=0;i<n;i++)
        scanf("%d",&Arr[i]);
    printf("Enter the place to be deleted at: ");
    scanf("%d",&Loc);
    if(Loc>=n+1 || Loc==0)
        printf("Location not found !");
    else{
        for(int i=Loc-1;i<n-1;i++)
            Arr[i]=Arr[i+1];
        printf("The New Array is:\n");
        for(int i=0;i<n-1;i++)
            printf("%d\t",Arr[i]);
    }
    return 0;
}