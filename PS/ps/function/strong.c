//digits ke factorial k sum
// strong number or not

#include <stdio.h> 
int fact(int a){  
    int f=1;  
    for(int i=1;i<=a;i++){  
        f=f*i;  
    }  
    return f;      
} 
int main(){  
    int n,r,sum=0;     
    scanf("%d",&n);  
    int k=n;    
    while(k!=0){  
        r=k%10;  
        int f=fact(r);  
        k=k/10;  
        sum=sum+f;  
    }  
    if(sum==n) 
        printf("\nNumber is a strong");   
    else  
        printf("\nNumber is not a strong");  
    return 0;  
}  
 