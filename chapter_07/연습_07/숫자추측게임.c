// 숫자 추측 게임
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int guess;

    srand((unsigned)time(NULL)); // 난수 발생기 시드 설정

    int answer = rand()%100+1; // 정답을 난수로 발생
    int tries = 0;

    do{
        printf("정답을 입력하시오: ");
        scanf("%d", &guess);
        tries++;

        if (guess < answer)
            printf("정답보다 작습니다.\n");
        
        if (guess > answer)
            printf("정답보다 큽니다.\n");

    }while(guess != answer);

    printf("축하합니다. 정답입니다. 시도횟수는 %d번 입니다.\n", tries);

    return 0;
}