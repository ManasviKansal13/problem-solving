#include <stdio.h>
int binarySearch(int A[],int start,int end,int x){
   if (end>=start){
     int mid=start+(end- start)/2;
     if (A[mid]==x) 
       return mid;
     if (A[mid]>x) 
       return binarySearch(A, start, mid-1, x);
     return binarySearch(A, mid+1,end, x);
   }
   return -1;
}
int main(){
  int A[] = {10,02,30,40,500};
  int n = sizeof(A)/ sizeof(A[0]);
  int x = 10;
  int result = binarySearch(A, 0, n-1, x);
  (result == -1)? printf("Element is not present in array")
  : printf("Element is present at index %d", result);
  return 0;
}