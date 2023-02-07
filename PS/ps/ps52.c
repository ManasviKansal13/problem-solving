#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
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
    int a,b;
    scanf("%d\n%d",&a,&b);
    printf("%d",GCD(a,b));
    return 0;
}