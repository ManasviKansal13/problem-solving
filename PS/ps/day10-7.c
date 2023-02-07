#include<stdio.h>
int main(){
    long long r,x;
    int r1[5]={0,2,4,6,8},c;
    scanf("%lld %d",&r,&c);
    if(r%2==0){
        x=((r/2-1)*10)+1;
        x=x+r1[c-1];
    }
    else{
        x=((r/2)*10);
        x=x+r1[c-1];
    }
    printf("%lld",x);
    return 0;
}