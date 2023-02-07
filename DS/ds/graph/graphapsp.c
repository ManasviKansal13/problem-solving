#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int apsp_flloyd_warshall(int w[][4],int n){
    int d[][]={0};
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(w[i][j]==0){
                if(i!=j)
                    d[i][j]=(__INT_MAX__/2)-1000;
            else
                d[i][j]=w[i][j];
            }
        }
    }
    for(int k=0;k<n;k++){
       for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int x=d[i][j];
                int y=d[i][k]+d[k][j];
                d[i][j]=min(x,y);
            }
        } 
    }
}
int main(){
    int v=0;
    v=4;
    int w[4][4]=((0,5,0,0),(0,1,0,0),(8,0,0,3),(2,0,0,0));
    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
            printf("%d\n",w[i][j]);
        }
        printf("\n");
    }
    apsp_flloyd_warshall(w,v);
    return 0;
}