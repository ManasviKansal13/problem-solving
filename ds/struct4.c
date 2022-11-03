#include<stdio.h>
struct time
{
    int hour;
    int min;
    int sec;
};
void addtime(struct time t1,struct time t2){
    struct time t3;
    t3.sec=(t1.sec+t2.sec)%60;
    int x=(t1.sec+t2.sec)/60;
    t3.min=(t1.min+t2.min+x)%60;
    int y=(t1.min+t2.min)/60;
    t3.hour=t1.hour+t2.hour+y;
    printf("%d:%d:%d",t3.hour,t3.min,t3.sec);
}
int main(){
    struct time t1={7,31,54};
    struct time t2={2,55,36};
    struct time t;
    addtime(t1,t2);
    return 0;
}