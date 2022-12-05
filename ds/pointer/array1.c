//traverse through fnt
#include<stdio.h>
void traverse(int *p,int n){
    for(int i=0;i<n;i++)
        printf("\t%d",*(p+i));
}
int main(){
    int A[10]={1,2,3,4,5,6,7,8,9,10};
    traverse(A,10);
    printf("\n");
    
    return 0;
}