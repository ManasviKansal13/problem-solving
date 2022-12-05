//prime no in a range
/*
#include<stdio.h>
#include<math.h>
void prime(int n){
    int x=sqrt(n);
    int flag=0;
    for(int i=2;i<x;i++){
        if(n%i==0){
            flag=1;
            break;
        }
    }
    if(flag==0)
      printf("prime");
    else
      printf("Not prime");
    for(int j=2;j<n;j++){
        if(n/2=)
    }
}
int main(){
    int a;
    scanf("%d",&a);
    prime(a);
    return 0;
}
*/

#include<stdio.h>
#include<math.h>
void range(int n){
    int date[n];
    date[0]=0;
    int x=sqrt(n);
    for(int i=2;i<=x;i++){
        int b=i;
        if(date[i]==0){
            for(int j=b+1;b<=n;b++){
                if(date[j]==0){
                    if(j%b==0)
                        date[j]=1;
                }   
            }    
        }
    }
    for(int i=2;i<=n;i++){
        if(date[i]==0){
            printf("%d ",i);
        }
    }
}
void main()
{
    int a;
    scanf("%d",&a);
    range(a);
}
