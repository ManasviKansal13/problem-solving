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
int FoldingHash(int key,int TS){
    int a=DigitCount(TS-1);
    int c=pow(10,a);
    int Sum=0;
    while(key!=0){
        int b=key%c;
        Sum=Sum+b;
        key=key/c;
    }
    int L=Sum%c;
    L=L%TS;
    return L;
}
int main(){
    int TS;
    printf("Enter the size of Table: ");
    scanf("%d",&TS);
    int key[4]={122353,3886317,2940405,7662334};
    for(int i=0;i<4;i++){
        printf("%d -> %d\n",key[i],FoldingHash(key[i],TS));
    }
    return 0;
}