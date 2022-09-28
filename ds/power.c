#include<stdio.h>
int power(int a,int b){
    int pow;
    if(b>0)
        pow=a*power(a,b-1);
    else
        pow=1;
    return pow;
}
int main(){
    int p,q;
    printf("Enter the number to find the power of: ");
    scanf("%d",&p);
    printf("Enter the power to be calculated: ");
    scanf("%d",&q);
    printf("The %dth power of %d is %d",q,p,power(p,q));
    return 0;
}