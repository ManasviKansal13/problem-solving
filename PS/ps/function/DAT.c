#include<stdio.h>
    long long DAT[100];
void main(){
    DAT[0]=0;
    DAT[1]=1;
    int n;
    scanf("%d",&n);
    for(int i=2;i<=n;i++)
        DAT[i]=DAT[i-1]+DAT[i-2];
    for(int i=0;i<=n;i++)
        printf("%lld\t",DAT[i]);
}