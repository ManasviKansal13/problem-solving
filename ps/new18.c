#include<stdio.h>
int main()
{
    int i,j,N;
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        for(int j=1;j<=i;j++){
            printf("%c",65+N-j);
        }
        printf("\n");
    }
    return 0;
}