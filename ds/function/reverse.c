#include <stdio.h>
int reverse(int A[],int start,int end){
     int temp;
     if(start < end){
        temp=A[start];
         A[start]=A[end];
         A[end]= temp; 
         reverse(A, start+1, end-1);     
     }  
     return 0;
}
int main(){
   int A[] = {10,20,30,40,50};
   int n = 5;
   reverse(A,0,n-1);
   printf("Reverse of the array: \n");
   for(int i = 0; i < n; i++){
        printf("%d ",A[i]);
   }
   return 0;
}
