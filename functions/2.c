//factorial of functn
#include<stdio.h>
int factorial(int n){
    int fact;
    if(n>0)
        fact=n*factorial(n-1);
    else
        fact=1;
    return fact;
}
int main(){
    int f;
    printf("Enter the number to find the factorial of: ");
    scanf("%d",&f);
    printf("The factorial of %d is %d",f,factorial(f));
    return 0;
}