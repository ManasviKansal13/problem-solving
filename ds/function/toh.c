#include<stdio.h>
void ToH(int N,char S,char M,char D){
    if(N==1){
        printf("%c--->%c ",S,D);
    }
    else{
        ToH(N-1,S,D,M);
        printf("%c--->%c ",S,D);
        ToH(N-1,M,S,D);
    } 
}
int main(){
    int n;
    printf("Enter the number of rings in S: ");
    scanf("%d",&n);
    ToH(n,'S','M','D');
    return 0;
}