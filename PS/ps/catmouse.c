#include<stdio.h>
#include<math.h>
char*catAndMouse(int x, int y,int z){
    int a=x-z;
    int b=y-z;
    if(a<0){
        a*=-1;
    }
    if(b<0){
        b*=-1;
    }
    if(a<b){
        return "Cat A";
    }else if(a>b){
        return "Cat B";
    }else{
        return "Mouse C";
    }
}
