#include<assert.h>
#include<ctype.h>
#include<limits.h>
#include<math.h>
#include<stdbool.h>
#include<stddef.h>
#include<stdint.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h> 
int main (){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,k;
        scanf("%d %d",&n,&k);
        int a[n],b[n];
        for(int i=0;i<n;i++)
            a[i]=i;
        int p=a[0];
        int q=a[n-1];
        for(int i=0;i<n;i++){
            if(i%2==0){
                b[i]=q;
                q--;
            }
            else{
                b[i]=p;
                p++;
            }
        }
        int y;
        for(int i=0;i<n;i++){
            if(b[i]==k){
                y=i;
                break;
            }
        }
        printf("%d",y);
    }
    return 0;
}