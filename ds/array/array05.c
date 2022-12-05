//MANASVI KANSAL (2021b0101013)
#include<stdio.h>
#include<conio.h>
int main(){
	 int i,N,sum=0,missing;
	 printf("enter the size of an array : ");
	 scanf("%d",&N);
	 int A[N-1];
	 printf("please give value to insert in array: \n");
	 for(i=0;i<N-1;i++){
	     scanf("%d",&A[i]);
	     sum=sum+A[i];
	 }
	 missing = (N*(N+1))/2 - sum;
	 printf("missing number is = %d", missing);
	 return 0;
}