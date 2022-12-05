#include<stdio.h>
int main()
{
    int i,j;
    // printf("The value of n is: ");
    // scanf("%d",&n);
    for(i=1;i<=5;i++){
       for(j=1;j<=i;j++){
          printf("%c ",j+64);
       }
       printf("\n");
    }
    return 0;
}
