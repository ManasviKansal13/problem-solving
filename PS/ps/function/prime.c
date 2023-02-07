#include<stdio.h>
void prime(int n){
    int flag=0;
    for(int i=2;i<n;i++){
        if(n%i==0){
            flag=1;
            break;
        }
    }
    if(flag==0)
      printf("prime");
    else
      printf("Not prime");
}
int main(){
    int a;
    scanf("%d",&a);
    prime(a);
    return 0;
}