#include<stdio.h>
int main()
{
    int i,j;
    // printf("The value of n is: ");
    // scanf("%d",&n);
    for(i=1;i<=5;i++){
       for(j=5;j>=5-i+1;j--){
          printf("%c ",j+64);
       }
       printf("\n");
    }
    return 0;
}
