#include<stdio.h>
int main(){
    int n,Loc,New;
    printf("Enter the count of no's uh wanna add:");
    scanf("%d",&n);
    int Arr[n];
    printf("Enter the Numbers in array: ");
    for(int i=0;i<n;i++)
        scanf("%d",&Arr[i]);
    printf("Enter the place to be inserted at: ");
    scanf("%d",&Loc);
    if(Loc>n+1)
        printf("Location not found !");
    else{
        printf("Enter the element to be inserted: ");
        scanf("%d",&New);
        for(int i=n-1;i>=Loc-1;i--)
            Arr[i+1]=Arr[i];
        Arr[Loc-1]=New;
        printf("The New Array is:\n");
        for(int i=0;i<=n;i++)
            printf("%d\t",Arr[i]);
    }
    return 0;
}