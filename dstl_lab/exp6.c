// cartesion product
//a*b ka pair
//b*a ka pair bhii print krana hai
#include<stdio.h>
int main(){
    int A[10], B[10];
    int i,j,m,n;
    printf("Enter the size of Set A: ");
    scanf("%d",&m); 
    printf("Enter the elements of A: ");
    for(i=0;i<m;i++){
        scanf("%d",&A[i]);
    }
    printf("Enter the size of Set B: ");
    scanf("%d",&n);
    printf("Enter the elements of B: ");
    for(i=0;i<n;i++){
        scanf("%d",&B[i]);
    }
    printf("AXB=");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("(%d,%d)", A[i],B[j]);
        }
    }
    printf("BXA=");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("(%d,%d)", B[i],A[j]);
        }
    }
    return 0;
}