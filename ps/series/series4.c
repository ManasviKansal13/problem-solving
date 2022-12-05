#include<stdio.h>
int main(){
    float sum,n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum=sum+1.0/i;
    }
    printf("%f",sum);
    return 0;
}