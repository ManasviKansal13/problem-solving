#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int DigitCount(int n){
    int count=0;
    while(n!=0){
        n=n/10;
        count++;
    }
    return count;
}
int MidSquareHash(int key,int TS){
    int a=DigitCount(TS-1);
    int b=DigitCount(key);
    int c=(2*b-a)/2;
    int x=(key*key)/pow(10,c);
    int L=x%(int)pow(10,a);
    L=L%TS;
    return L;
}
int main(){
    int TS;
    printf("Enter the size of Table: ");
    scanf("%d",&TS);
    int key[4]={122353,3886317,2940405,7662334};
    for(int i=0;i<4;i++)
        printf("%d -> %d\n",key[i],MidSquareHash(key[i],TS));
    return 0;
}