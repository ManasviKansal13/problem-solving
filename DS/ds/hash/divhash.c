#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int Prime(int n){
    int a=0;
    for(int i=2;i<pow(n,0.5)+1;i++){
        if(n%i==0){
            a=1;
            break;
        }
    }
    if(a==0 && n!=1)
        return n;
    else
        return 1;
}
int NearestPrime(int n){
    while(1){
        n--;
        if(Prime(n))
            return n;
    }
}
int DivisionHash(int key,int TS){
    int NP=NearestPrime(TS);
    int L=key%NP;
    return L;
}
int main(){
    int *T,TS;
    printf("Enter the size of Table: ");
    scanf("%d",&TS);
    T=calloc(TS,sizeof(int));
    int key[4]={122353,3886317,2940405,7662334};
    for(int i=0;i<4;i++){
        printf("%d -> %d\n",key[i],DivisionHash(key[i],TS));
    }
    return 0;
}
