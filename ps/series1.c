/*#include<stdio.h>
int main(){
    int sum=0,n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    printf("%d",sum);
    return 0;
}
*/
/*#include<stdio.h>
int main(){
    int sum=0,n, f=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        f=f*i;
        sum=sum+f;
    }
    printf("%d",sum);
    return 0;
}
*/
/*#include<stdio.h>
int main(){
    int sign=1;
    int sum=0,n, f=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        f=f*i;
        sum=sum+sign*f;
        sign=sign*-1;
    }
    printf("%d",sum);
    return 0;
*/
/*#include<stdio.h>
int main(){
    float sum,n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum=sum+1.0/i;
    }
    printf("%f",sum);
    return 0;
}
*/

/*#include<stdio.h>
int main(){
    int sum,n,x, f,p;
    scanf("%d",&n);
    scanf("%d",&x);
    for(int p=1;p<=n;p++){
        p=p*x;
    }
    for(int i=1;i<=n;i++){
        sum=sum+p/i*f;
    }
    printf("%d",sum);
    return 0;
}
*/
#include<stdio.h>
int main(){
    int sum,n,x, f,p;
    scanf("%d",&n);
    scanf("%d",&x);
    for(int p=1;p<=n;p++){
        p=p*x;
    }
    for(int i=1;i<=n;i++){
        sum=sum+p/i*f;
    }
    printf("%d",sum);
    return 0;
} 
