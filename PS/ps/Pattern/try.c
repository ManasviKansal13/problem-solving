#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of the box:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0||i==n-1){
                printf("%d",n);
            }
            else{
                if(j==0||j==n-1){
                    printf("%d",n);
                }
                else{
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}