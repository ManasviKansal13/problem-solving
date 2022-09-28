#include<stdio.h>
int fact(int n){
    int factorial;
    if(n>0)
        factorial=n*fact(n-1);
    else
        factorial=1;
    return factorial;
}

int main(){
    int p;
    printf("Enter the number to find the factorial of: ");
    scanf("%d",&p);
    printf("The factorial of %d is %d",p,fact(p));
    return 0;
}