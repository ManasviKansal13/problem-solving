#include<stdio.h>
int main(){
    int sum=0,n, f=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        f=f*i;
        sum=sum+f;
    }
    printf("%d",sum);
    return 0;
}