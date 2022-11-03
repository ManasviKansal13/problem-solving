#include<stdio.h>
// quadrant search
int main(){
    srand(time(null));
    int random=rand()%10
    int x,y;
    printf("Enter coordinates: ");
    scanf("%d%d",&x,&y);
    if(x>0,y>0){
        printf("1 Q");
    }
    else if(x<0,y>0){
        printf("2 Q");
    }
    else if(x<0,y<0){
        printf("3 Q");
    }
    else if(x>0,y<0){
        printf("4 Q");
    }
    else if(x!=0,y==0){
        printf("x axis");
    }
    else if(x==0,y!=0){
        printf("y axis");
    }
    else{
        printf("origin");
    }
    return 0;
}