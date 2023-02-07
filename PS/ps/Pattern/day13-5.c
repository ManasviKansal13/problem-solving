#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h

int  rotLeft(int a_count, int* a, int d, int* result_count) {
    int resarr[];
    int n=d%a_count;
    int temp[]=(int *)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++){
        scanf("%d",&temp[i]);
    }
    for(int i=a_count-n;i<a_count;i++){
        scanf("%d",&resarr[i]);
    }
    
}