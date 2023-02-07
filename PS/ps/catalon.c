//c0=1
//c1=1
//c2=c1c0+c0c1=2
#include<stdio.h>
int CatolonNo(int N){
    if(N==0)
        return 1;
    else 
        if(N==1)
            return 1;
        else{
            int sum=0;
            for(int i=0;i<N;i++){
                sum=sum+CatolonNo(N-1-i)*CatolonNo(i);
                return sum;
            }
        }      
}
int main(){
    printf("%d",CatolonNo(4));
    return 0;
}       