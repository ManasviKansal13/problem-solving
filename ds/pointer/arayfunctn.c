//input and output alag funtion
#include<stdio.h>
#include<stdlib.h>
void input(int *p,int n){
    //p=(int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",(p+i));
    }
}
void output(int *p,int n){
   //p=(int *)malloc(n*sizeof(int));
   for(int i=0;i<n;i++){
        printf("%d ",*(p+i));
    } 
}
int main(){
    int *p,n;
    p=(int *)malloc(n*sizeof(int));
    printf("Enter the size of array:");
    scanf("%d",&n);
    input(p,n);
    output(p,n);
    return 0;
}