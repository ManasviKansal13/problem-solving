#include<stdio.h>
int main(){
    int A[11],low,high,searchkey,mid;
    A[11]={10,20,30,40,50,70,80,90,100,120};
    printf("%d",A[10]);
    printf("Enter the number to be searched: ");
    scanf("%d",&searchkey);
    while(low<=high){
        mid=(low+high)/2;
        if(A[mid]==searchkey)
          return mid;
        else{
            if(searchkey<A[mid]){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
    }
    return -1;
}