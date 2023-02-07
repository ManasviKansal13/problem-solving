// 1+2+3=6
//sum of divisors of no.
//perfect no or not

#include<stdio.h>
int main(){  
    int n,sum=0;
    scanf("%d",&n);
    for(int i=2;i<n;i++){
        if(n%i==0)
            sum=sum+i;    
    }
    sum += 1;
    printf("%d", sum);
    if(sum==n){ 
        printf("\n %d is perfect number",n);
    }
    else    
        printf("\n %d is not perfect number",n);
    return 0;
}