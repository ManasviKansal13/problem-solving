#include<stdio.h>
// greatest of 3 numbers

int main(){
    int a,b,c;
    printf("Enter 3 numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b){
        if(a>c){
            printf("A is greatest");
        }
        else{
            printf("C is greatest");
        }
    }
    else{
        if(b>c){
            printf("B is greatest");
        }
        else{
            printf("C is greatest");
        }
    }
    return 0;
}
