#include <stdio.h>

// 이해가 잘 되지 않음..ㅜ

int main()
{
    int i, j, isPrime;

    for(i = 2; i <= 100; i++) // 2부터 100까지의 숫자를 검사
    {
        isPrime = 1; // 소수 여부를 판별하는 플래그를 초기화

        for(j = 2; j <= i / 2; j++) // 2부터 i의 절반까지 나눠서 검사
        {
            if(i % j == 0) // i가 j로 나눠떨어지면
            {
                isPrime = 0; // 소수가 아님
                break; // 더 이상 검사할 필요 없음
            }
        }

        if(isPrime) // 소수인 경우
            printf("%d ", i);
    }
    printf("\n");
    return 0;
}