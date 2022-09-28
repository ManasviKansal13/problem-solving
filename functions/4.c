//vol of the given sphere
#include<stdio.h>
int volume(int r){
    int V;
    int pi=3.14;
    V=4/3.0*(pi*r*r*r);
    return V;
}
int main(){
    int radius;
    printf("Enter the radius of sphere: ");
    scanf("%d",&radius);
    printf("The volume of sphere is %d",volume(radius));
    return 0;
}
