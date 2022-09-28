#include<stdio.h>
int main(int tc, int tr, int r,int c,int A[r][c],int n){
    r[100]={0};
    c[100]={0};
    r=[0],c=[2],n=1;
    A[0][2]=1;
    while (n!=25)
    {
        int tr=r,tc=c;
        tr--;
        if(tr<0)
          tr=4;
        tc++;
        if(tc>4)
          tc=0;
    }
    n=n+1;
    if(A[tr][tc]==0){
        A[tr][tc]=n;
        r=tr,c=tc;
    }
    else{
        tr=r,tc=c;
        r=r+1;
        A[5][5]=n;
    }
    printf("%d",A[5][5]);
    return 0;
    
}