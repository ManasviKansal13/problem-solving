#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

char WEEKDAYS[][9] = {
    "Sunday", 
    "Monday", 
    "Tuesday", 
    "Wednesday", 
    "Thrusday",
    "Friday", 
    "Saturday"
};

int main() {
    int dd,mm,yyyy;
    scanf("%d %d %d",&dd,&mm,&yyyy);
    int weekday  = (dd += mm < 3 ? yyyy-- : yyyy - 2, 23*mm/9 + dd + 4 + yyyy/4- yyyy/100 + yyyy/400)%7;
    if(weekday > 6){
        printf("Incorrect Date");
    }else{
        printf("%s", WEEKDAYS[weekday]);
    }
    return 0;
}