#include<stdio.h>
int main()
{
    int i,j,N ,k;
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        
        for(int k=0;k<i;k++)
            printf(" ");
        for(int j=1;j<=N-i+1;j++)
            printf("%d ",j);
        
        printf("\n");
    }
    return 0;
}