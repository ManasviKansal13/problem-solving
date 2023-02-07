//https://practice.geeksforgeeks.org/problems/pattern-printing1347/1

#include<stdio.h>
int main(){
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i+2){
        printf("*");
        i++;
    }
    return 0;
}