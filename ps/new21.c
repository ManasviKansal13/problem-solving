#include<stdio.h>
int main()
{
    int i,j,N ,k;
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        
        for(int k=1;k<=N-i;k++)
            printf(" ");
        for(int j=1;j<=i;j++)
            printf("%c ",'A'+i-1);
        
        printf("\n");
    }
    return 0;
} 