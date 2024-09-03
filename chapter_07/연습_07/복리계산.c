//몇 년만에 원금의 10배가 되는지 계산
#include <stdio.h>
#define SEED_MONEY 1000000

int main()
{
    int year = 0, money = SEED_MONEY;

    while(1){
        year++;

        money += (money*0.3);

        if(money > 10000000) break;
    }

    printf("원금의 10배가 되는 시간은 %d 년 후이다\n", year);
    
    return 0;
}