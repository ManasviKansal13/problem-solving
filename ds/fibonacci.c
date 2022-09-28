#include<stdio.h>
int fibonacci(int n){
    int fib;
    if(n>2)
        fib=fibonacci(n-1)+fibonacci(n-2);
    else if (n==2)
        fib=1;
    else
        fib=0;
    return fib;
}  

int main(){
    int p;
    printf("Enter the number to find the fibonacci of: ");
    scanf("%d",&p);
    printf("The fibonacci of %d is %d",p,fibonacci(p));
    return 0;
}