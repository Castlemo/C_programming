#include <stdio.h>

int main()
{
    /* int oil = 100, amount;
    char 충전소비량;

    while(1){
        printf("현재 연료량: %d\n", oil);

        if(oil < 20)
            printf("(경고) 연료가 20리터 미만입니다.");

        printf("연료충전 +, 연료소모 -: ");
        scanf(" %c%d", &충전소비량, &amount);

        if(충전소비량 == '+')
            oil += amount;
        
        if(충전소비량 == '-')
            oil -= amount;
        
        if(oil <= 0)
            {printf("연료 소진\n");
            break;}
    
    while (getchar() != '\n'); // 입력 버퍼를 비워 다음 입력 시 문제가 발생하지 않도록 함. ???
    }*/


    float initial_f;
    float p_m;

    printf("초기 연료량: ");
    scanf("%f", &initial_f);

    while(1){
        printf("연료충전 +, 연료소모 -:");
        scanf("%f", &p_m);

        initial_f += p_m;

        printf("현재 남아있는 양은 %.f 리터 입니다.\n", initial_f);

        if(initial_f < 20)
            printf("(경고) 연료가 20리터 미만입니다.\n");
    }
    return 0;
}