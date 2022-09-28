#include<stdio.h>
int main()
{
    int i,j,N ,k;
    scanf("%d",&N);
    for(int i=1;i<=N-1;i++){
        
        for(int k=1;k<=N-i;k++)
            printf(" ");
        for(int j=1;j<=2*i-1;j++)
            printf("*");
        
        printf("\n");
    }
    return 0;
}