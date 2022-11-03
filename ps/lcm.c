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
int LCM(int a,int b){
    int lcm;
    lcm=(a*b)/GCD(a,b);
    return lcm;
}
int main(){
    int p,q;
    printf("Enter the numbers to find the LCM of: ");
    scanf("%d %d",&p,&q);
    printf("The LCM of %d & %d is %d",p,q,LCM(p,q));
    return 0;
}