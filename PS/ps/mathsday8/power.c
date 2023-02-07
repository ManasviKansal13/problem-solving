//a to power b and ryt se kth digit
#include<stdio.h>
#include<math.h>
long long power(int p,int q){
    if (q==0)
        return 1;
    else
        return p*power(p,q-1);
}
int main(){
    long long p,digit,z,y;
    long long a,b,k,ans;
    scanf("%lld",&a);
    scanf("%lld",&b);
    scanf("%lld",&k);
    p=power(a,b);
    printf("%lld",p);
    z=power(10,k);
    digit=p%z;
    //printf("\n%lld",digit);
    y=power(10,k-1);
    ans=digit/power(10,k-1);
    printf("\n%lld",ans);
    return 0;
}