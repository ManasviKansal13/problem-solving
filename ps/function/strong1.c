//digits ke factorial k sum
// strong number till n
#include<stdio.h>  
int fact(int a){  
    int f=1;  
    for(int i=1;i<=a;i++){  
        f=f*i;  
    }  
    return f;      
} 
int main(){  
    int f=1,sum=0;  
    int n,r; 
    scanf("%d",&n);  
    printf("\n Strong numbers are :");  
    for(int i=1;i<=n;i++){  
        int k=i;  
        while(k!=0){  
            r=k%10;  
            f=fact(r);  
            k=k/10;  
            sum=sum+f;  
        }  
        if(sum==i){  
        printf("%d ",i);  
        }  
        sum=0;  
    }   
    return 0;  
}  
  