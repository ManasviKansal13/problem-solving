#include<stdio.h>
int main(){
    int sum,n,x, f,p;
    scanf("%d",&n);
    scanf("%d",&x);
    for(int p=1;p<=n;p++){
        p=p*x;
    }
    for(int i=1;i<=n;i++){
        sum=sum+p/i*f;
    }
    printf("%d",sum);
    return 0;
}