#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
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
int main() {
    int a;
    scanf("%d",&a);
    printf("%d",fibonacci(a));
    return 0;
}