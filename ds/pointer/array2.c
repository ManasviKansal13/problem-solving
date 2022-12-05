//user defined array
//dynamic memory alloctn...malloc 
//p=(int *)malloc(N*sizeof(int))
#include<stdio.h>
#include<stdlib.h>
/*
int main(){
    int *p,i;
    p=(int *)malloc(40);
    for(i=0;i<10;i++){
        scanf("%d",(p+i));
    }
    for(i=0;i<10;i++){
        printf("%d ",*(p+i));
    }
    return 0;
}
*/
int main(){
    int *p,i,n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    p=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        scanf("%d",(p+i));
    }
    for(i=0;i<n;i++){
        printf("%d ",*(p+i));
    }
    return 0;
}