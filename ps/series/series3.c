#include<stdio.h>
int main(){
    int sign=1;
    int sum=0,n, f=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        f=f*i;
        sum=sum+sign*f;
        sign=sign*-1;
    }
    printf("%d",sum);
    return 0;
}