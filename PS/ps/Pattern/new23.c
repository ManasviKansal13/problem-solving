
#include<stdio.h>
int main()
{
    int i,j,N ,k ;
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        
        for(int k=1;k<=N-i;k++)
            printf(" ");
        for(int j=1;j<=i;j++)
            printf("%d ",i+j-1);
        for(k=1;k<=i-1;k++)
            printf("%d ",i+j-1-k);
        
        printf("\n");
    }
    return 0;
}