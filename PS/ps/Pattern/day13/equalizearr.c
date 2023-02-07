#include<stdio.h>
#include<stdlib.h>
int main(){
    int ar[];
    int n=4;
    for(int i=0;i<n;i++){
        scanf("%d ",&ar[i]);
        printf("%d\t",ar[i]);
    }
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(ar[i+1]==ar[i]){
                count++;
                i++;
            } 
            else
                i++;
        }
    }
}

