#include<stdio.h>
#include<math.h>
int Nearestprime(int n){
    if (n==0 & 1)
        n -= 2;
    else
        n--;
    int i, j;
    for (i = n; i >= 2; i -= 2){
        if (i % 2 == 0)
            continue;
        for (j = 3; j <= sqrt(i); j += 2){
            if (i % j == 0)
                break; 
        }
        if (j > sqrt(i))
            return i;
    }
    return 2;
}
int divisionhash(int key,int TS){
    int NP=Nearestprime(TS);
    int L=key%NP;
    return L;
}
int main(){
   int n{};
   scanf("%d",&n);
   int A[n],int i;
   for(i=0;i<n;i++){
      divisionhash(A[i],n);
   }
    return 0;
}
