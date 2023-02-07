//equalize the array
#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
long long DAT[];
void main(){
    DAT[0]=0;
    DAT[1]=1;
    int n;
    scanf("%d",&n);
    for(int i=2;i<=n;i++)
        DAT[i]=DAT[i-1]+DAT[i-2];
    for(int i=0;i<=n;i++)
        printf("%lld\t",DAT[i]);
}

int main(){

}