//first n natural number sum.
#include<stdio.h>
int fsum(int n){
    int i,sum=0;
    for(i=1;i<=n;i++){
        sum=sum+i;
    }
    return sum;
}
int main(){
     int n,s;
     printf("Enter the number:");
     scanf("%d",&n);
     s=fsum(n);
     printf("%d",s);
     return 0;
}