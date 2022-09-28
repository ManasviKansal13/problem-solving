#include<stdio.h>
int GCD(int a, int b){
    int gcd;
    if(a>b)
        gcd=GCD(a-b,b);
    else if (b>a)
        gcd=GCD(a,b-a);
    else
        gcd=a;
    return gcd;
}
int main(){
    int p,q;
    printf("Enter the numbers to find the GCD of: ");
    scanf("%d %d",&p,&q);
    printf("The GCD of %d & %d is %d",p,q,GCD(p,q));
    return 0;
}